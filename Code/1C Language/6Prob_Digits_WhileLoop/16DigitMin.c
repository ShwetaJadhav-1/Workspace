#include<stdio.h>

int CheckMin(int iNo)
{
    int iDigit = 0;
    int iTemp = 0;
    int iMin = 0;

    if(iNo < 0)         // updater
    {
        iNo = -iNo;
    }

    iDigit = (iNo % 10);
    iTemp = iDigit;

    while(iNo > 0)
    {
        iDigit = (iNo % 10);
        iMin = iDigit;
        if(iMin > iTemp)
        {
            iMin = iTemp;
        }
        iNo = iNo / 10;

    }

    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    iRet = CheckMin(iValue);

    printf(" Minimum digit is : %d\n",iRet);

    return 0;
}