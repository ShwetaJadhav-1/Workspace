#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
int LastOccurance(int *Arr,int iSize,int iValue)
{
    int iCnt = 0;
    // int iPos = 0;
    int iPos = -1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]  == iValue))
        {
            iPos = iCnt;
        }
    }

    return iPos;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iPres = 0;
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

    printf("Enter the Number to find out last occurance of Number\n");
    scanf("%d",&iPres);

    // Step 4 : Call the function
    iRet = LastOccurance(ptr, iLength,iPres);  
    if(iRet == -1) 
        printf("Number %d is not present\n",iPres); 
    else
        printf("Number %d is  occured at index %d\n",iPres,iRet);

    // Step 6 : Deallocate the memory
    free(ptr); 

    return 0;
}