// Accept the number from user and Display Odd Factor

#include<stdio.h>
#include<stdbool.h>

void DisplayOddFactors(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= (iNo/2); iCnt = iCnt + 2)
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
	
	DisplayOddFactors(iValue);
	
	return 0;
}