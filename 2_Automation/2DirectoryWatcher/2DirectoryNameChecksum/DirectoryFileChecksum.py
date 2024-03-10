import os
from sys import *
import hashlib

def hashfile(path,blocksize = 1024):
    afile = open(path,'rb')
    hasher = hashlib.md5()
    buf = afile.read(blocksize)
    while len(buf) > 0:
        hasher.update(buf)
        buf = afile.read(blocksize)
    afile.close()
    return hasher.hexdigest()

def DisplayCheckSum(path):
    flag = os.path.isabs(path)
    if flag == False:
        path = os.path.abspath(path)

    exists = os.path.isdir(path)

    if exists:
        for dirName,subdirs,fileList in os.walk(path):
            print("Current folder is "+dirName)
            for filen in fileList:
                path = os.path.join(dirName,filen)
                file_hash = hashfile(path)
                print(path)
                print(file_hash)
                print('')
    else:
        print("Invalid path")

def main():
    print("-------Marvellous Infosystems Automations--------")
    
    print("Automation script started with name : ",argv[0])

    if(len(argv) != 2):
        print("Error : Insufficient arguments")
        print("Use -h for help and use -u for usage of the script")
        exit()

    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Hello : This script is used to traverse specific directory and display checksums of files")
        exit()

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : ApplicationName AbsolutePath_of_Directory Extension")
        exit()

    try:
        arr = DisplayCheckSum(argv[1])
    except ValueError:
        print("Error : Invalid data type of input")
    except Exception as E:
        print("Error : Invalid input",E)

if __name__ == "__main__":
    main()