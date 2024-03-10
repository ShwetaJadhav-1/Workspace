#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void SummEvenOddCount(int *Arr,int iSize)
{
    int iEvenSum = 0, iCnt = 0, iOddSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0))
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else 
        {
            iOddSum = iOddSum + Arr[iCnt];
        }        
    }
    printf("Summation of even element is : %d \nSummation of odd element is : %d",iEvenSum,iOddSum);
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
    SummEvenOddCount(ptr, iLength);    

    // Step 6 : Deallocate the memory
    free(ptr); 

    return 0;
}