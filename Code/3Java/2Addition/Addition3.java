import java.util.*;

class Addition3
{
    static int Addition(int i, int j)   // in main function: static can access only static & non-static access everything
    {
        int Sum = 0;
        Sum = i + j;
        return Sum;
    }

    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in); // import statement
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        iAns = Addition(iNo1, iNo2);

        System.out.println("Addition is : "+iAns);
    }
}