#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CountFreq(int *Arr,int iSize,int iValue)
{
    int iFreCnt = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]  == iValue))
        {
            iFreCnt++;
        }
    }
    return iFreCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iFreq = 0;
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

    printf("Enter the Number to find out frequency\n");
    scanf("%d",&iFreq);

    // Step 4 : Call the function
    iRet = CountFreq(ptr, iLength,iFreq);   
    printf("frequency of %d is : %d\n",iFreq,iRet); 

    // Step 6 : Deallocate the memory
    free(ptr); 

    return 0;
}