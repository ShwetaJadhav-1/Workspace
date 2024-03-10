class value:
    def __init__(self,Data):
        self.No = Data

    def SumFactor(self):
        Sum = 0
        for i in range(1,int((self.No))+1):
            if(self.No % i == 0):
                Sum = Sum + i
        return Sum

    def CheckPerfect(self):
        Ans = self.SumFactor()

        if (Ans == self.No):
            return True
        else:
            return False

def main():
    print("Please enter number")
    A = int(input())

    obj = value(A)

    Output = obj.SumFactor()

    Ret = obj.CheckPerfect()
    if(Ret == True):
        print("{} is a perfect number",format(A))
    else:
        print("{} is a perfect number", format(A))

if __name__ == "__main__":
    main()