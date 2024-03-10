#include<stdio.h>
#include<stdlib.h>

int Summation(int iData[], int iSize) // Data[100]:- Array la pointer
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + iData[iCnt];
    }

    return iSum;
}

int main()
{
    int iArr[5];    // static memory 
    int iCnt = 0, iRet = 0;

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

   // iRet = Summation(iArr[0], 5);   // note: expected 'int *' but argument is of type 'int'

    iRet = Summation(iArr,5);       // Summation(100,5) : Array cha base address
    
    printf("Addition of all elements is : %d\n",iRet);

    return 0;
}