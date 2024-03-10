# Accept the number and return its reverse numbers 

def Display(No):
    if(No > 0):
        print(No)
        # No = No - 1
        Display(No - 1) # Tail Recursion

Display(4)