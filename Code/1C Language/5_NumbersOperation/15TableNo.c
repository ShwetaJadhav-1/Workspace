// Accept the number from user and check whether the naumber is perfect or not

#include<stdio.h>
#include<stdbool.h>

void DisplayTable(int iNo)
{
	int iCnt = 0;
	
	printf("_______________________\n");
	
	printf("Table of %d is :\n",iNo);
	
	printf("________________________\n");
	
	for(iCnt = 1; iCnt <=10; iCnt++)
	{	
		printf("%d\n",iNo * iCnt);		
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