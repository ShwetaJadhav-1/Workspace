// Accept the number from user and Display Even Factor

#include<stdio.h>
#include<stdbool.h>

void DisplayEvenFactors(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 2; iCnt <= (iNo/2); iCnt = iCnt+2) 	// Time Complexity :- No/4 : reduced by 75%
	{
		if((iNo % iCnt == 0))
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	DisplayEvenFactors(iValue);
	
	return 0;
}