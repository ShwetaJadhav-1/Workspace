import java.util.*;

class AdditionOOPFinal4
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in); // import statement
        int iNo1 = 10, iNo2 = 11, iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNo1, iNo2);
        iAns = aobj.Addition();

        System.out.println("Addition is : "+iAns);
    }
}

class Arithmatic
{
    public int iValue1;     // Characteristics
    public int iValue2;     // Characteristics

    public Arithmatic(int i, int j)     // parameterised constructor
    {
        iValue1 = i;
        iValue2 = j;
    }
    public int Addition()       // Behaviour
    {
        int Sum = 0;
        Sum = iValue1 + iValue2;
        return Sum;
    }
}
