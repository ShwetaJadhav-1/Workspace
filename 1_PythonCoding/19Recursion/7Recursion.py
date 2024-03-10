# Accept the number and return its reverse numbers 

def Display(No):
    if(No > 0):
        No = No - 1
        Display(No) # Head Recursion
        print(No)

Display(4)