#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void DisplayEvenOddCount(int *Arr,int iSize)
{
    int iEvenCnt = 0, iCnt = 0, iOddCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0))
        {
            iEvenCnt = iEvenCnt + 1;
        }
        else 
        {
            iOddCnt = iOddCnt + 1;
        }        
    }
    printf("Even Count is : %d \nOdd Count is : %d",iEvenCnt,iOddCnt);
    // printf("Number of Odd elements are : %d\n",iSize - iEvenCnt);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iRet = 0;

    // Step 1 : Accept Size of array
    printf("Enter the Number of Elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Please Enter the Numbers : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    DisplayEvenOddCount(ptr, iLength);    

    // Step 6 : Deallocate the memory
    free(ptr); 

    return 0;
}