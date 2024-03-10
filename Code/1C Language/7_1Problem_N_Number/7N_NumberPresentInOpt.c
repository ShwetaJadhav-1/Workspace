#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
bool PresentOrNot(int *Arr,int iSize,int iValue)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]  == iValue))
        {
            break;
        }
    }
    printf("Value of iCnt is : %d \n",iCnt);
    if(iCnt == iSize)
        return false;
    else 
        return true;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iPres = 0;
    bool bRet = false;

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

    printf("Enter the Number to find out Presence\n");
    scanf("%d",&iPres);

    // Step 4 : Call the function
    bRet = PresentOrNot(ptr, iLength,iPres);  
    if(bRet == true) 
        printf("Number %d is present\n",iPres); 
    else
        printf("Number %d is not present\n",iPres);

    // Step 6 : Deallocate the memory
    free(ptr); 

    return 0;
}