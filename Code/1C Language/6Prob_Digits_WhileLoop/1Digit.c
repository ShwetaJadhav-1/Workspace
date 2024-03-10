// Input : 7514
// Output : 4

// Input : 75
// Output : 2

// Input : 7
// Output : 1
#include<stdio.h>

int CountDigits(int iNo)
{

    return 0;
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