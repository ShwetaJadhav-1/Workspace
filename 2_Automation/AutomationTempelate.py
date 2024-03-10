from sys import *

def Script_Task(No):
    if((No % 2) == 0):
        print("It is even number")
    else:
        print("It is odd number")


def main():
    print("-------Marvellous Infosystems Automations--------")
    
    print("Automation script started with name : ",argv[0])

    if(len(argv) != 2):
        print("Error : Insufficient arguments")
        print("Use -h for help and use -u for usage of the script")
        exit()

    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Hello : This script is used to perform ________________")

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Provide __________ number of arguments as")
        print("First argument as : ________")
        print("Second argument as : ________")
        exit()

    else:
        #print("There is no such option in script as : ",argv[1])
        Script_Task(int(argv[1]))

if __name__ == "__main__":
    main()