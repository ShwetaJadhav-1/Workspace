
# Normal functions / Named functions
# Syntax :- def Function_Name(Function_Parameters):
#               Function body
def Add(No1,No2):
    return No1 + No2

# Lambda functions / Unnamed functions / Anonymous function
# Syntax :- lambda paramteres : body

AddFunction = lambda A,B : A+B

Ans1 = Add(10,11)
Ans2 = AddFunction(10,11)

print("Addition using normal function : ",Ans1)
print("Addition using lambda function : ",Ans2)

print("Type of lambda function is : ",type(AddFunction))