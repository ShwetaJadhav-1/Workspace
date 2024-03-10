from sys import *
import os
import hashlib
import time
import datetime
import schedule
import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders

FROM_ADDRESS = os.environ.get('EMAIL_USER')
EMAIL_PASSWORD = os.environ.get('EMAIL_PASS')

def SendMail(log_path, TO_ADDRESS, startTime, fileCnt, iDel):
    msg = MIMEMultipart()
    msg['From'] = FROM_ADDRESS
    msg['To'] = TO_ADDRESS
    msg['Subject'] = "Information of Directory containing duplicate files"
    lines = ['Starting Starting time of scanning : '+str(startTime) , 'Total number of files scanned : '+str(fileCnt) , 'Total number of duplicate files found : '+str(iDel)]
    body = '\t\n'.join(lines)
    
    msg.attach(MIMEText(body, 'plain'))
    filename = "LogFile.txt"
    attachment = open(log_path, "rb")
    p = MIMEBase('application', 'octet-stream')
    p.set_payload((attachment).read())
    encoders.encode_base64(p)
    p.add_header('Content-Disposition', "attachment; filename= %s" % filename)
    msg.attach(p)

    s = smtplib.SMTP('smtp.gmail.com', 587)

    s.starttls()

    s.login(FROM_ADDRESS, EMAIL_PASSWORD)

    text = msg.as_string()

    s.sendmail(FROM_ADDRESS, TO_ADDRESS, text)

    print("mail sent")

    s.quit() 
    

def hashfile(path,blocksize = 1024):
    afile = open(path,'rb')
    hasher = hashlib.md5()
    buf = afile.read(blocksize)
    
    while len(buf) > 0:
        hasher.update(buf)
        buf = afile.read(blocksize)    
    afile.close()    
    return hasher.hexdigest()

def DeleteFiles(dict1, log_dir,startTime,fileCnt):
    iDel = 0
    directory = "Marvellous"
    Dir = os.path.join(log_dir,directory)
    exists = os.path.isdir(Dir)
    if (not exists):
        os.mkdir(Dir)    
   
    log_path = os.path.join(Dir,"LogFile.%s.txt"%(time.ctime()).replace(' ', '_').lower().replace(':', '_').lower())
    os.path.normpath(log_path)      

    separator = "-" * 80
    f = open(log_path,"w")
    f.write(separator + "\n")
    f.write("The list of files that are deleted : "+time.ctime() + "\n")
    f.write(separator + "\n")    

    results = list(filter(lambda x: len(x) > 1,dict1.values()))
    iCnt = 0
    if len(results) > 0:        
        for result in results:
            for subresult in result:
                iCnt = iCnt + 1
                if(iCnt >= 2):
                    iDel = iDel + 1
                    f.write("%s\n" % subresult)
                    os.remove(subresult)
            iCnt = 0   
    else:
        print("No duplicate files found : ")     

    SendMail(log_path, argv[3],startTime, fileCnt,iDel)


def FindDuplicate(path):
    startTime = time.time()
    flag = os.path.isabs(path)
    if flag == False:
        path = os.path.abspath(path)
    log_dir = path
    
    fileCnt = 0

    exists = os.path.isdir(path)
    dups = {}
    if exists:
        for dirName,subdirs,fileList in os.walk(path):
            
            for filen in fileList:
                fileCnt = fileCnt + 1
                path = os.path.join(dirName,filen)
                file_hash = hashfile(path)
                if file_hash in dups:
                    dups[file_hash].append(path)
                else:
                    dups[file_hash] = [path]             
        
        DeleteFiles(dups,log_dir,startTime,fileCnt)
    else:
        print("Invalid path")

def main():
    
    print("Automation script started with name : ",argv[0])

    if(len(argv) != 4):
        print("Error : Insufficient arguments")
        print("Use -h for help and use -u for usage of the script")
        exit()

    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Hello : This script is used to traverse specific directory and remove duplicate files")
        exit()

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : ApplicationName AbsolutePath_of_Directory Extension")
        exit()

    try:

        min = int(argv[2])
        path = argv[1]
        
        startTime = time.time()
        schedule.every(min).minutes.do(FindDuplicate,path)
        endTime = time.time()

        while(True):
            schedule.run_pending()
            time.sleep(10)        

    except ValueError:
        print("Error : Invalid data type of input")

if __name__ == "__main__":
    main()