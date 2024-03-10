#include<stdio.h>

int AdditionR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        printf("%d\t",Arr[iCnt]);
        iSum = iSum + Arr[iCnt];
        iCnt++;
        AdditionR(Arr,iSize);
    }    
    return iSum;
}    

int main()
{
    int Brr[5] = {10,20,30,40,50};
    int iRet = 0;

    iRet = AdditionR(Brr,5);
    printf("\nAddition of array element is : %d\n",iRet);

    return 0;
}
