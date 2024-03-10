// To find factorial of number and display the result

#include<stdio.h>

int Factorial(int iValue)
{	
	int iFact = 1; // Value change
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iFact = iFact * iCnt;	// Operator change
	}
	
	return iFact;
}

int main()
{
	int iRet = 0;
	int iNo = 0;
	
	printf("Enter the value : \n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	
	printf("Factorial of %d is : %d\n",iNo,iRet);
	
	
	return 0;
}