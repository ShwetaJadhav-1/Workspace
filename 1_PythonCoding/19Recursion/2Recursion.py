# function will display 4 times hello on the screen

def Display(No):
    iCnt = 0

    if(iCnt < No):
        print("Hello")
        iCnt = iCnt + 1
        Display(No) # RecursionError: maximum recursion depth exceeded while calling a Python object
        # StackOverflow

        
Display(4)
