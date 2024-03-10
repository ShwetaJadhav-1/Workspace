print("Accept N number from user and return Addition")

class Numbers:
    def __init__(self):
        self.Size = 0
        self.Arr = list()
        self.Accept()
       # self.Display()

    def Accept(self):
        print("How many elements you want to store")
        self.Size = int(input())

        print("Please enter the elements")
        Value = 0
        for i in range(0,self.Size,1):
            Value = int(input())
            self.Arr.append(Value)

    def Display(self):
        print("Elements from list are : ")
        for i in range(0,self.Size):
            print(self.Arr[i])

    def Addition(self):
        iSum = 0
        for i in range(0,self.Size,1):
            iSum = iSum + self.Arr[i]
        return iSum

    def Average(self):
        iSum = 0
        for i in range(0,self.Size,1):
            iSum = iSum + self.Arr[i]
        return (iSum/self.Size)

    def Maximum(self):
        Max = self.Arr[0]
        for i in range(0,self.Size):
            if(self.Arr[i] > Max):
                Max = self.Arr[i]

        return Max

    def Minimum(self):
        Min = self.Arr[0]
        for i in range(0,self.Size):
            if(self.Arr[i] < Min):
                Min = self.Arr[i]

        return Min

    def CheckPrime(self,No):
        i = 0
        Flag = True
        for i in range(2, int(No / 2) + 1):
            if (No % i == 0):
                Flag = False
                break
        return Flag

    def DisplayFactor(self):
        for i in range(0,self.Size):
            if(self.CheckPrime(self.Arr[i]) == True):
                print("{} is a prime number".format(self.Arr[i]))

def main():
    obj = Numbers()

   # obj.Accept()

    obj.Display()

    Output = obj.Addition()
    print("Addition of all elements is : ",Output)

    Output = obj.Average()
    print("Average of all elements is : ", Output)

    Output = obj.Maximum()
    print("Maximum of all elements is : ", Output)

    Output = obj.Minimum()
    print("Minimum of all elements is : ", Output)

    obj.DisplayFactor()

if __name__ == "__main__":
    main()



