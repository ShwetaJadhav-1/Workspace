import java.util.*;

class MultiplicationOfFactors5
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in); // import statement
        int iNo1 = 0, iRet = 0;

        System.out.println("Enter The number : ");
        iNo1 = sobj.nextInt();        

        Numbers nobj = new Numbers();

        iRet = nobj.FactorsMultiplication(iNo1);
        System.out.println("Multiplication of Factors of "+iNo1+" is : "+iRet);
    }
}

class Numbers
{
    public int FactorsMultiplication(int iValue1)
    {
        int iCnt = 0, iMult = 1;

        System.out.println("Factors are : ");
        
        for(iCnt = 1;iCnt <= iValue1/2; iCnt++)
        {
            if((iValue1 % iCnt) == 0)
            {
                System.out.println(iCnt);
                iMult = iMult * iCnt;
            }
        }

        return iMult;
    }
}