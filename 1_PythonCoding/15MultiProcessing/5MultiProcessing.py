import time
import multiprocessing

def DisplayEven(No):
    for i in range(1,No,1):
        if(i % 2 == 0):
            print("Even number : ",i)


def DisplayOdd(No):
    for i in range(1,No,1):
        if(i % 2 != 0):
            print("Odd number : ",i)

def main():
    print ("Demonstration of parallel programming using multiple processes")
    Number = 20000

    p1 = multiprocessing.Process(target = DisplayEven,args = (Number, ))
    p2 = multiprocessing.Process(target=DisplayOdd, args=(Number,))  # p1 and p2 are - handles

    p1.start()
    p2.start()

    p1.join()
    p2.join()       # odd - even:  odd - even: mix output
    # join mule: ethun pudhe jat nahi: joparyant p1, p2 sampat nahi
    print("End of main")

if __name__ == "__main__":
    start_time = time.process_time()  #
    main()
    end_time = time.process_time()
    print("Execution time is : ",end_time - start_time)