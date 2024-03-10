import java.util.*;

class CommonFactors4
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in); // import statement
        int iNo1 = 0, iNo2 = 0;

        System.out.println("Enter First number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();
        nobj.CommonFactorDisplay(iNo1, iNo2);
    }
}

class Numbers
{
    public void CommonFactorDisplay(int iValue1, int iValue2)
    {
        int iCnt = 0;

        System.out.println("Common factors are : ");
        
        for(iCnt = 1; (iCnt <= iValue1/2) && (iCnt <= iValue2/2); iCnt++)
        {
            if((iValue1 % iCnt == 0) && (iValue2 % iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}