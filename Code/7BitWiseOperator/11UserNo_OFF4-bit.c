#include<stdio.h>
#include<stdbool.h>
// 4th bit [4th OFF, others unchanged pahije]
typedef unsigned int UINT;

//
// No       1   0   1   1   1   0   0   1
// Mask`    1   1   1   1   0   1   1   1
// ---------------------------------------------OPERATION:- AND
// result   1   1   1   1   0   0   0   1

//  0000    0000    0000    0000    0000    0000    0000    0000
//  1111    1111    1111    1111    1111    1111    1111    0111

// 0XFFFFFFF7


UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    UINT iAns = 0;

    iAns = No & iMask;
    
    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = false;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}