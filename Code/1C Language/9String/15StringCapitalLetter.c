#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
            iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char cValue[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",cValue);

    iRet = CountCapital(cValue);
    printf("Number of Capital letter is : %d\n",iRet);

    return 0;
}