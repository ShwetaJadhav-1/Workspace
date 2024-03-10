//  4
//  A   B   C   D
// Time Complexity :- N
// ASCII :- American Standard Code for Information Interchange
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    
    if(iNo < 0)     // updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}