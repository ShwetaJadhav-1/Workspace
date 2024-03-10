# Recursion is the calling the same function from that function itself

def Display(No):

    if(No > 0):
        print("Hello")
        No = No - 1
        Display(No) # Recursive function call
        
Display(4)  # Normal function call
