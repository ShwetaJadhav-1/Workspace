#include<stdio.h>

void CountEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    if(iNo == 0)
    {
        //printf("Even Count = 1\n");
        //printf("Odd Count = 0\n");

       // return;

       iEvenCnt++;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Even Count = %d\n",iEvenCnt);
    printf("Odd Count = %d\n",iOddCnt);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    CountEvenOddDigits(iValue);

    return 0;
}