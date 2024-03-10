#include<stdio.h>

int CountDigits(int iNo)
{
    //int iDigit = 0;
    int iCnt = 0;

    //while(iNo >= 0)         // >= Infinite loop (No error: Its bug-Run hoto pn fatato)
    
    while(iNo > 0)              // Only Positive number
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