import java.util.*;
// Follow this file 
class Addition4
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in); // import statement
        int iNo1 = 10, iNo2 = 11, iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic();
        iAns = aobj.Addition(iNo1, iNo2);

        System.out.println("Addition is : "+iAns);
    }
}

class Arithmatic
{
    public int Addition(int i, int j)
    {
        int Sum = 0;
        Sum = i + j;
        return Sum;
    }
}
