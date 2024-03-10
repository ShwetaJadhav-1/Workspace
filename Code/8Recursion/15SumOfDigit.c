#include<stdio.h>
#include<stdbool.h>

int sumDigitsR(int No)
{
    static int iSum = 0;
    int iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No / 10;
        sumDigitsR(No);
    }
    return iSum;    
}    

int main()
{
    int Value = 0;
    int iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = sumDigitsR(Value);
    printf("Summation of digits is : %d\n",iRet);

    return 0;
}
