#include<stdio.h>
#include<stdlib.h>  

// Step 5 : Perform the operation on array
void DisplayReverse(int *Arr,int iSize)
{
    int iCnt = 0,iMin = Arr[0];
   // for(iCnt = iSize; iCnt > 0; iCnt--)// look at memory bound
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }   
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

    printf("Elements in the reverse order are : \n");

    // Step 4 : Call the function
    DisplayReverse(ptr, iLength);  

    // Step 6 : Deallocate the memory
    free(ptr); 

    return 0;
}