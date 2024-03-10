from functools import reduce

def main():
    print("Enter number of elements you want to enter : ")
    iSize = int(input())

    Data_Input = []
    print("Please enter the data")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        Data_Input.append(Value)

    print("Data is : ",Data_Input)

    Data_Filter = list(filter(lambda No : (No % 2 == 0), Data_Input))
    print("Data after filter is : ",Data_Filter)

    Data_Map = list(map(lambda No : (No * 2), Data_Filter))
    print("Data after map is : ",Data_Map)

    Data_Reduce = reduce(lambda No1, No2 : (No1 + No2),Data_Map)
    print("Data after reduce is : ",Data_Reduce)



if __name__ == "__main__":
    main()