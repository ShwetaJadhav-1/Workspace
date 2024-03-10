// Acceptthe number from user and diplay the factors

#include<stdio.h>

int SumFactors(int iNo)
{
/* Example iNo = 8	
	(8 % 1) == 0
	(8 % 2) == 0
	(8 % 3) == 0
	(8 % 4) == 0
	(8 % 5) == 0
	(8 % 6) == 0
	(8 % 7) == 0	
*/

	int iCnt = 0;
	int iSum = 0;
	
	printf("Factors are : \n");
	
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++) 	// O(N/2) Order of N/2
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
			
		}
	}
	
	return iSum;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = SumFactors(iValue);
	printf("Summation of Factors is : %d\n",iRet);
	
	return 0;
}