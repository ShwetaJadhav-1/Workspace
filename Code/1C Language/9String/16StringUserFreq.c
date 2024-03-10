#include<stdio.h>

int CountUserLetter(char *str, char iCh)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == iCh))
            iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char cValue[20];
    char iCh = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",cValue);

    
    iRet = CountUserLetter(cValue,'a');
    printf("Number of %c is : %d\n",iCh,iRet);

    return 0;
}