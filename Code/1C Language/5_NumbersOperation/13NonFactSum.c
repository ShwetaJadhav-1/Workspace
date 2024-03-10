// Accept the number from user and check whether the naumber is perfect or not

#include<stdio.h>
#include<stdbool.h>

int SumNonFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			iSum = iSum + iCnt;

		}
	}
	
	return iSum;
}
// 6	 28		496		8128

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = SumNonFactors(iValue);
	
	printf("Summation of Non Factors is : %d",iRet);
	
	return 0;
}