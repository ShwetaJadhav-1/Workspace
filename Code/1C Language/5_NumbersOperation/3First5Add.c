// To add first 5 numbers and display the result

#include<stdio.h>

int FirstFiveAdd()
{	
	int iSum = 0;
	
	iSum = iSum + 1;
	iSum = iSum + 2;
	iSum = iSum + 3;
	iSum = iSum + 4;
	iSum = iSum + 5;
	
	return iSum;
}

int main()
{
	int iRet = 0;
	
	iRet = FirstFiveAdd();
	
	printf("Addition is : %d\n",iRet);
	
	
	return 0;
}