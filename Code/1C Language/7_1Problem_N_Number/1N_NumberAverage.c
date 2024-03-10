#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr,int iSize)
float Average(int Arr[],int iSize)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return (iSum / iSize);  // (150 / 5)
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i =0;
    float fRet = 0.0f;

    printf("Enter the Number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    // ptr = (int *)malloc(5 * 4); 20 bytes of memory --- heap
    printf("Size of ptr after malloc %d\n",sizeof(ptr));

    printf("Please Enter the Numbers : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // fRet = Average(500,5);
    fRet = Average(ptr, iLength);
    printf("Average of Array Elements is : %f\n",fRet);

    free(ptr);  // free(500) : resource deallocation
    printf("Size of ptr after malloc %d",sizeof(ptr));

    return 0;
}