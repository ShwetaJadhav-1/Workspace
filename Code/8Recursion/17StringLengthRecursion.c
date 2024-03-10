#include<stdio.h>
#include<stdbool.h>

int strLenR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strLenR(str);
    }    
    return iCnt;
}    

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strLenR(Arr);
    printf("Length of the string is : %d\n",iRet);

    return 0;
}
