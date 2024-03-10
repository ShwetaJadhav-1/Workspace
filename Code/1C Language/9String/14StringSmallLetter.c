#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(cValue);
    printf("Number of Small letter is : %d\n",iRet);

    return 0;
}