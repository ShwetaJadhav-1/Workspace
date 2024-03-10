#include<stdio.h>
#include<stdlib.h>  

// Step 5 : Perform the operation on array
int FindSmallest(int *Arr,int iSize)
{
    int iCnt = 0,iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] < iMin))
        {
            iMin = Arr[iCnt];   // time complexity N
        }
    }
   
    return iMin;
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
    iRet = FindSmallest(ptr, iLength);  
    printf("Smallest number is : %d",iRet);

    // Step 6 : Deallocate the memory
    free(ptr); 

    return 0;
}