#include<stdio.h>
#include<stdbool.h>

bool CheckUserLetter(char *str, char iCh)
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == iCh))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char cValue[20];
    char iCh = '\0';
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",cValue);

    printf("Enter one charcter to find frequency\n");
    scanf(" %c",&iCh); // Added space

    bRet = CheckUserLetter(cValue,iCh);

    if(bRet == true)
        printf("Character %c is present\n",iCh);
    else
        printf("charcter %c is not present\n",iCh);

    return 0;
}