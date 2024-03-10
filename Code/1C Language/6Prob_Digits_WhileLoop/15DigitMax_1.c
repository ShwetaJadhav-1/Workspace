#include<stdio.h>

int CheckMax(int iNo)
{
    int iDigit = 0;
    int iMax = 0;
    int iCnt = 1;

    if(iNo < 0)     // updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = (iNo % 10);
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
        iCnt++;
    }
    printf("%d\n",iCnt);
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    iRet = CheckMax(iValue);

    printf(" Maximum digit is : %d\n",iRet);

    return 0;
}