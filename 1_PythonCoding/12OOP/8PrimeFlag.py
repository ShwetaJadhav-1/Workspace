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

    def CheckPrime(self):
        i = 0
        Flag = True
        for i in range(2,int(self.No/2)+1):
            if(self.No % i == 0):
                Flag = False
                break
        return Flag

def main():
    print("Please enter number")
    A = int(input())

    obj = value(A)

    Output = obj.SumFactor()

    Ret = obj.CheckPerfect()
    if(Ret == True):
        print("{} is a perfect number".format(A))
    else:
        print("{} is not a perfect number". format(A))

    Ret = obj.CheckPrime()
    if (Ret == True):
        print("{} is a prime number".format(A))
    else:
        print("{} is not a prime number".format(A))

if __name__ == "__main__":
    main()