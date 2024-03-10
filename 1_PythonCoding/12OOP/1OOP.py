
class Arithmatic:
    def __init__(self,A,B):         # self - keyword(related to this keyword)
        print("Inside init method")
        self.No1 = A
        self.No2 = B

    def Addition(self):
        Ans = self.No1 + self.No2
        return Ans

    def Substraction(self):
        Ans = self.No1 - self.No2
        return Ans

def main():
    print("Inside main method")

    obj = Arithmatic(11,10)     # __init__ method la call gela

    output = obj.Addition()
    print("Addition is : ",output)

    output = obj.Substraction()
    print("Substraction is : ", output)

    objX = Arithmatic(21,20)

if __name__ == "__main__":
    print("Inside Starter")
    main()