#include<stdio.h>
#include<stdbool.h>

int countSmallR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }        
        str++;
        countSmallR(str);
    }    
    return iCnt;
}    

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = countSmallR(Arr);
    printf("Small charcter in the string is : %d\n",iRet);

    return 0;
}
