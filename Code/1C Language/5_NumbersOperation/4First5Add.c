// To add first 5 numbers and display the result

#include<stdio.h>

int FirstFiveAdd()
{	
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= 5; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	
	return iSum;
}

int main()
{
	int iRet = 0;
	
	iRet = FirstFiveAdd();
	
	printf("Addition is : %d\n",iRet);
	
	
	return 0;
}