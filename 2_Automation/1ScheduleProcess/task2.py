import time
import datetime
import schedule 

def Fun():
    print("Inside fun at the time : ",datetime.datetime.now())

def main():
    print("Inside task schedular")
    print("Current time is : ",datetime.datetime.now())


    
    schedule.every(1).minutes.do(Fun)
    print("After schedule")

    while(True):
        schedule.run_pending()
        time.sleep(1)
        
if __name__ == "__main__":
    main()