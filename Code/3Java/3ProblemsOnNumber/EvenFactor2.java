import java.util.*;

class EvenFactor
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in); // import statement
        int iNo1 = 0;

        System.out.println("Enter the number : ");
        iNo1 = sobj.nextInt();

        Numbers nobj = new Numbers();
        nobj.EvenFactorDisplay(iNo1);
    }
}

class Numbers
{
    public void EvenFactorDisplay(int iValue1)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iValue1/2); iCnt++)
        {
            if(((iValue1 % iCnt) == 0) && ((iCnt % 2) == 0) )
            {
                
                System.out.println("Even Factor is : "+iCnt);
                
            }
        }
    }
}