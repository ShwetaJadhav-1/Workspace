print("Application to demonstrate Industrial Programming")

import Module

def main():
    print("vakue of __name__ from main is : ",__name__)

    print("Enter first number : ")
    no1 = int(input())
    print("Enter second number : ")
    no2 = int(input())

    Sum = Module.Addition(no1,no2)

    print("Addition is : ",Sum)

if __name__ == "__main__":
    main()