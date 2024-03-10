#include<stdio.h>
#include<stdbool.h>

int countCapitalR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }        
        str++;
        countCapitalR(str);
    }    
    return iCnt;
}    

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = countCapitalR(Arr);
    printf("Capital charcter in the string is : %d\n",iRet);

    return 0;
}
