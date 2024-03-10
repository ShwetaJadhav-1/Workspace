def CheckEven(No):
    return (No % 2 == 0)

def Multiply(No):
    return (No * 2)

def Addition(No1, No2):
    return(No1 + No2)

def filterX(Helper_Function, Data):
    Result = []
    for no in Data:
        if(Helper_Function(no) == True):
            Result.append(no)
    return Result

def mapX(Helper_Function, Data):
    Result = []
    for i in Data:
        Value = Helper_Function(i)
        Result.append(Value)
    return Result

def reduceX(Helper_Function, Data):
    Ans = 0
    for i in Data:
        Ans = Helper_Function(Ans, i)
    return Ans

def main():
    print("Enter number of elements you want to enter : ")
    iSize = int(input())

    Data_Input = []
    print("Please enter the data")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        Data_Input.append(Value)

    print("Data is : ",Data_Input)

    Data_Filter = filterX(CheckEven, Data_Input)
    print("Data after filter is : ",Data_Filter)

    Data_Map = mapX(Multiply, Data_Filter)
    print("Data after map is : ",Data_Map)

    Data_Reduce = reduceX(Addition,Data_Map)
    print("Data after reduce is : ",Data_Reduce)

if __name__ == "__main__":
    main()