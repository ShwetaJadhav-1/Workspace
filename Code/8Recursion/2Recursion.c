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
    static int iCnt = 1;    // storage class = static

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
