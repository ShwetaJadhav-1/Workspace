#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iArr[5];    // static memory 
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&iArr[iCnt]);
    }

    printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",iArr[iCnt]);
    }

    return 0;
}