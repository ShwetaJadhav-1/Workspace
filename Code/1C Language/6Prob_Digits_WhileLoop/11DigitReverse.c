#include<stdio.h>
// Time complexity is always N where N is number of digits in your program
int DisplayReverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = false;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    iRet = DisplayReverse(iValue);

    printf("Reverse number is : %d\n",iRet);

    return 0;
}

