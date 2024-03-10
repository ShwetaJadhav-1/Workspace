
def CheckEvenX(No):
    return (No % 2 == 0) # Expression:- == relational operator
# relational operator always return True of False

Even = lambda No : No % 2 == 0

Ret = Even(13)

if(Ret == True):
    print("Its Even")
else:
    print("Its Odd")