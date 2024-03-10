
def Outer(): # 100
    print("Inside outer")

    def Inner(): # 200
        print("Inside Inner")
        
    print(id(Inner))
    return Inner    # return 200

ret = Outer() # ret = 100() :Cant call to Inner function 
print(type(ret))
print(id(ret))
ret() # 200() : call to inner  : *Outer entity can call Inner function

# OUTPUT :
# Inside outer
# Inside Inner