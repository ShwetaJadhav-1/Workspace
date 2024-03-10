#include<stdio.h>

void strcpyLowerX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else
        {
           *dest = *src;
        }
        src++;
        dest++; 
        
    }
    *dest = '\0'; 
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    strcpyLowerX(Arr,Brr);   // strcpyX(100,200)

    printf("Copied string is : %s\n",Brr);

    printf("Original String is : %s\n",Arr);

    return 0;
}