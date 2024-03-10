#include<stdio.h>
#include<stdbool.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%c\n",*str);       
        str++;
        Display(str);
    }    
}    

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}
