import java.util.*;

class ArmstrongNumber6
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in); // import statement
        int iNo1 = 0;

        System.out.println("Enter The number : ");
        iNo1 = sobj.nextInt();        

        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmstrongNumber(iNo1);
        if(bRet == true)
        {
            System.out.println(iNo1+" Is a Armstrong number.");
        }
        else
        {
            System.out.println(iNo1+" Is not a Armstrong number.");
        }        
    }
}

class Digits
{
    private int CountDigits(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    private int Power(int Base, int Index)      // Base = 4 : Index = 5
    {
        int iAns = 1;
        for(int iCnt = 1; iCnt <= Index; iCnt++)
        {
            iAns = iAns * Base;
        }
        return iAns;
    }

    public boolean CheckArmstrongNumber(int iValue1)
    {
        int iTemp = iValue1;
        int iSum = 0;
        int iDigit = 0;
        int iRet = 0;

        int iCount = CountDigits(iValue1);
        while(iValue1 != 0)
        {
            iDigit = iValue1 % 10;
            
            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet;
            
            iValue1 = iValue1 / 10;
        }   
        if(iSum == iTemp)
        {
            return true;
        } 
        else
        {
            return false;
        }    
    }
}