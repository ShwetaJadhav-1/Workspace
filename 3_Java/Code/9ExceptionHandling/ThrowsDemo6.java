import java.util.*;

class ThrowsDemo6
{
    public static void main(String a[])
    {
        Scanner sobj  = new Scanner(System.in);
        System.out.println("Enter first number ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number ");
        int iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(); 

        try
        {
            int iRet = aobj.Division(iNo1,iNo2);
            System.out.println("Division is "+iRet);

        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured");
            System.out.println(obj);            
        }
    }
}

class Arithmatic
{
    public int Division(int A,int B) throws ArithmeticException // savdhan techi pati
    {
        int iAns = 0;
        iAns = A / B;
        return iAns;
    }
}

