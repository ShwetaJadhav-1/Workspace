//  4
//  1   *   2   *   3   *   4   *
// Common Pattern :- 1  *   : number-tab-*-tab
// Identify the changing pattern :- number
// Identify non-changing pattern :- *
// tii now : Time Complexity :- N

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
        printf("%d\t",iCnt);    // Dynamic
        printf("*\t");          // Static
        //printf("%d\t*\t",iCnt);
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