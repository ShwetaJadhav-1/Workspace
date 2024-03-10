//  4
//  1   2   3   4   *   *   *   *
// 1) Find out groups :- 2
// 2) Relation in that group :- No
// 3) So we need 2 groups :- No nested : 
// 4) It is called as serial loop
// 5) Time complexity :- 2N  
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)     // updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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