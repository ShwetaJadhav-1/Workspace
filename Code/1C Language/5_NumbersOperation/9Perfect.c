// Accept the number from user and check whether the naumber is perfect or not

#include<stdio.h>

int SumFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++) 	// O(N/2) Order of N/2
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
			
		}
	}
	
	if(iSum == iNo)
		return 1;
	else
		return 0;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = SumFactors(iValue);
	
	if(iRet == 1)
		printf("The Number %d is a perfect number",iValue);
	else
		printf("The Number %d is not a perfect number",iValue);
	
	return 0;
}