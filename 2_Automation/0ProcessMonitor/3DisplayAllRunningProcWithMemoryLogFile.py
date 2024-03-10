import psutil
import os
import time
from sys import *

def ProcessDisplay(log_dir = "Marvellous"):
    listprocess = []

    if not os.path.exists(log_dir):
        try:
            os.mkdir(log_dir)
        except:
            pass

    separator = "-" * 80
    log_path = os.path.join(log_dir,"MarvellousLog%s.log"%(time.ctime()))
    f = open(log_path,'w')
    f.write(separator + "\n")
    f.write("Marvellous Infosystems Process Logger : "+time.ctime() + "\n")
    f.write(separator + "\n")

    for proc in psutil.process_iter():
        try:
            pinfo = proc.as_dict(attrs = ['pid', 'name', 'username'])
            pinfo["vms"] = proc.memory_info().vms/(1024 * 1024)            
            listprocess.append(pinfo)

        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass

    for element in listprocess:
        f.write("%s\n" % element)

def main():
    print("Marvellous Infosystems : Python Automation & Machine Learning")

    print("Automation script started with name : "+argv[0])

    if(len(argv) != 2):
        print("Error : Insufficient arguments")
        print("Use -h for help and use -u for usage of the script")
        exit()

    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Hello : This script is used to log record of running processes")
        exit()

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : ApplicationName Absolute path of directory")        
        exit()

    try:
        ProcessDisplay(argv[1])
    
    except ValueError:
        print("Error : Invalid datatype of input")

    except Exception as E:
        print("Error : Invalid input",E)

if __name__ == "__main__":
    main()