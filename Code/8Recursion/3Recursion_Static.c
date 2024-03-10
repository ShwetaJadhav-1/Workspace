//   *   *   *   *

#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;       // Storage Class = auto

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}

void DisplayR()
{
    int iCnt = 1;    // without static :- Uncontrolled Recursion

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();     // Recursive Call
    }
    
}

int main()
{
    //DisplayI();

    DisplayR();

    return 0;
}
