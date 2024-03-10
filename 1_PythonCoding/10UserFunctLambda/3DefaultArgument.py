
def Area(Radius,PI = 3.14):
    Result = PI * Radius * Radius
    return Result

def main():
    RValue = 10.5
    PIValue = 3.14

    # positional argument
    Ans = Area(RValue,PIValue)  # Ans = Area(10.5,3.14)
    print("Area of Circle is : ",Ans)   # 346.185

    # keyword argument
    Ans = Area(PI =  PIValue, Radius = RValue)  # Ans = Area(10.5,3.14)
    print("Area of Circle is : ", Ans)  # 346.185

    # Positional argument and second is default
    Ans = Area(10.5)  # Ans = Area(10.5)
    print("Area of Circle is : ", Ans)  # 346.185

    # keyword argument and second is default
    Ans = Area(Radius = 10.5)  # Ans = Area(10.5)
    print("Area of Circle is : ", Ans)  # 346.185

    # keyword argument
    Ans = Area(PI = 7.10, Radius=10.5)  # Ans = Area(7.10,10.5)
    print("Area of Circle is : ", Ans)  # 782.775

if __name__ == "__main__":
    main()