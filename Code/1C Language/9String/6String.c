#include<stdio.h>
#include<stdbool.h>

int main()
{
    char cValue[50];
    bool bRet = false;

    printf("Please enter your full name\n");
    scanf("%s",cValue); // Name of array is internally considered as a base address of a array

    printf("Your name is : %s\n",cValue);

    return 0;
}