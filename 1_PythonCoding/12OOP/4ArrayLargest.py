print("Accept N number from user and return Addition")

class Numbers:
    def __init__(self):
        self.Size = 0
        self.Arr = list()

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

def main():
    obj = Numbers()

    obj.Accept()
    obj.Display()

    Output = obj.Addition()
    print("Addition of all elements is : ",Output)

    Output = obj.Average()
    print("Average of all elements is : ", Output)

    Output = obj.Maximum()
    print("Maximum of all elements is : ", Output)

if __name__ == "__main__":
    main()