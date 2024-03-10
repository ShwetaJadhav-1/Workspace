#include<stdio.h>

int CountDigits(int iNo)
{
    //int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)     // Updater - Value change krun pudhe pathavte
    {
        iNo = -iNo;
    }

    while(iNo > 0)         // Works for Positive or Negative number
    {
        //iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}