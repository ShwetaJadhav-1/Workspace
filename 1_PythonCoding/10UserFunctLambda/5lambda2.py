def CheckEven(No):
    if(No % 2 == 0):
        return True
    else:
        return False

def CheckEvenX(No):
    return (No % 2 == 0) # Expression:- == relational operator
# relational operator always return True of False

Ret = CheckEven(12) # Normal

Ret = CheckEven(13) # Compact

if(Ret == True):
    print("Its Even")
else:
    print("Its odd")