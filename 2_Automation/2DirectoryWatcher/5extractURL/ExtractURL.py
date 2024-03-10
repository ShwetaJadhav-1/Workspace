from sys import *
import webbrowser
import re
import urllib

def is_connected():
    try:
        urllib.urlopen('http://192.168.0.10',Timeout = 1)
        return True
    except urllib.URLError as err:
        return False

def Find(string):
    url = re.findall()
    return url
    


def main():
    print("-------Marvellous Infosystems Automations--------")
    
    print("Automation script started with name : ",argv[0])

    if(len(argv) != 2):
        print("Error : Insufficient arguments")
        print("Use -h for help and use -u for usage of the script")
        exit()

    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Hello : This script is used to open URL which are written in one file")
        exit()

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : ApplicationName Name_Of_File")
        print("First argument as : File name")
        exit()

    try:
        coonected = is_connected()

        if connected:
            WebLauncher(argv[1])
        else:
            print("Unable to connect to internet...")

    except ValueError:
        print("Error : Invalid datatype of input")
    except Exception as E:
        print("Error : Invalid input",E)

if __name__ == "__main__":
    main()