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

    printf("Enter one charcter to find frequency\n");
    scanf("%c",&iCh); // Input Buffer full ahe mhanun, ethe thambat mahi
    // special scanf cha \n:- enter aslyamule..
    iRet = CountUserLetter(cValue,iCh);
    printf("Number of %c is : %d\n",iCh,iRet);

    return 0;
}