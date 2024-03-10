import java.util.*;

class ArmstrongNumber1Funct7
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
    public boolean CheckArmstrongNumber(int iValue1)
    {
        int iDigitCount = 0;
        int iTemp = iValue1;
        int iDigit = 0;
        int iPower = 1, iSum = 0;
        
        while(iTemp != 0)       // Logic to calculate number of digits
        {
            iDigitCount++;
            iTemp = iTemp / 10;
        }

        iTemp = iValue1;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            
            for(int iCnt = 1; iCnt <= iDigitCount; iCnt++)  // Logic to calculate the power
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;     // important

            iTemp = iTemp / 10;
        }

        if(iSum == iValue1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}