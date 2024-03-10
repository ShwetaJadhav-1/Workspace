print("Application to demonstrate Industrial Programming")

def Addition(value1, value2):
    Ans = value1 + value2
    return Ans

def main():
    print("Enter first number : ")
    no1 = int(input())
    print("Enter second number : ")
    no2 = int(input())

    Sum = Addition(no1,no2)

    print("Addition is : ",Sum)

if __name__ == "__main__":
    main()