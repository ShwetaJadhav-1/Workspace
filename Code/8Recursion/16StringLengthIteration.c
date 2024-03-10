#include<stdio.h>
#include<stdbool.h>

int strLenI(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }    
    return iCnt;
}    

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strLenI(Arr);
    printf("Length of the string is : %d\n",iRet);

    return 0;
}
