// To add first 5 numbers and display the result

#include<stdio.h>

int FirstFiveAdd()
{
	int iNo1 = 1;
	int iNo2 = 2;
	int iNo3 = 3;
	int iNo4 = 4;
	int iNo5 = 5;
	
	int iSum = 0;
	iSum = iNo1 + iNo2 + iNo3 + iNo4 + iNo5;
	
	return iSum;
}

int main()
{
	int iRet = 0;
	
	iRet = FirstFiveAdd();
	
	printf("Addition is : %d\n",iRet);
	
	
	return 0;
}