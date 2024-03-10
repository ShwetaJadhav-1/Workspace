// Accept the number from user and check whether the naumber is perfect or not

#include<stdio.h>
#include<stdbool.h>

void DisplayTable(int iNo)
{
	int iCnt = 10;
	int iSum = 0;
	
	printf("_______________________\n");
	
	printf("Table of %d is :\n",iNo);
	
	printf("________________________\n");
	
	while(iCnt >= 1)
	{	
		iSum = iSum + iNo;
		printf("%d\n",iSum);	
		iCnt--;
	}
	
	printf("________________________\n");
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}

