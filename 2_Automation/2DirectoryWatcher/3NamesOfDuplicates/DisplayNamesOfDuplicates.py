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

def FindDuplicate(path):
    flag = os.path.isabs(path)
    if flag == False:
        path = os.path.abspath(path)

    exists = os.path.isdir(path)

    dups = {}
    if exists:
        for dirName,subdirs,fileList in os.walk(path):
            print("Current folder is "+dirName)
            for filen in fileList:
                path = os.path.join(dirName,filen)
                file_hash = hashfile(path)
                if file_hash in dups:
                    dups[file_hash].append(path)
                else:
                    dups[file_hash] = [path]
        return dups
    else:
        print("Invalid path")

def printDuplicate(dict1):
    results = list(filter(lambda x: len(x) > 1,dict1.values()))

    if len(results) > 0:
        print("Duplicates found: ")

        print("The following files are identical:")

        iCnt = 0
        for result in results:
            for subresult in result:
                iCnt = iCnt + 1
                if(iCnt >= 2):
                    print('\t\t%s' % subresult)
    
    else:
        print("No duplicate files found : ")

def main():
    
    print("Automation script started with name : ",argv[0])

    if(len(argv) != 2):
        print("Error : Insufficient arguments")
        print("Use -h for help and use -u for usage of the script")
        exit()

    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Hello : This script is used to traverse specific directory and display sizes of files")
        exit()

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : ApplicationName AbsolutePath_of_Directory Extension")
        exit()

    try:
        arr = {}
        arr = FindDuplicate(argv[1])
        printDuplicate(arr)

    except ValueError:
        print("Error : Invalid data type of input")
    

if __name__ == "__main__":
    main()