//  Row 4, Columns 4
/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/
// Nested Loop :- refer book
// Time complexity :- N(square)
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0,j = 0;
    if(iRow < 0)    // updater
    {
        iRow = -iRow;
    }
    if(iCol < 0)    // updater
    {
        iRow = -iRow;
    }
    //    1        2       3
    for(i = 1; i <= iCol; i++)  // Outer
    {
        //    1        2       3
        for(j = 1; j <= iRow; j++)  // Inner : 4 of Outer
        {
            printf("*\t");  // 4 of Inner
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

     printf("Enter number of coloumns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}