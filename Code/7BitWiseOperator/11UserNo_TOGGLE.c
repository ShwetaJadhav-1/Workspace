#include<stdio.h>
#include<stdbool.h>
// 4th bit [4th OFF, others unchanged pahije]
typedef unsigned int UINT;

//
// No       1   0   1   1   1   0   0   1
// Mask`    0   0   0   0   1   0   0   0
// ---------------------------------------------OPERATION:- EX_OR
// result   1   0   1   1   0   0   0   1

//  0000    0000    0000    0000    0000    0000    0000    0000
//  0000    0000    0000    0000    0000    0000    0000    1000

// 0X00000008


UINT OffBit(UINT No)
{
    UINT iMask = 0X00000008;
    UINT iAns = 0;

    iAns = No ^ iMask;
    
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