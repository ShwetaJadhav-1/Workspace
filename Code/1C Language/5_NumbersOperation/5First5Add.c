// To add first 5 numbers and display the result

#include<stdio.h>

int FirstFiveAdd(int iValue)
{	
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	
	return iSum;
}

int main()
{
	int iRet = 0;
	int iNo = 0;
	
	printf("Enter the value : \n");
	scanf("%d",&iNo);
	
	iRet = FirstFiveAdd(iNo);
	
	printf("Addition is : %d\n",iRet);
	
	
	return 0;
}