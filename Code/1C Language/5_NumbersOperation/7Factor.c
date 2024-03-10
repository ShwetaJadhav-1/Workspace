// Acceptthe number from user and diplay the factors

#include<stdio.h>

void DisplayFactors(int iNo)
{
/* Example iNo = 8	
	(8 % 1) == 0
	(8 % 2) == 0
	(8 % 3) == 0
	(8 % 4) == 0
	(8 % 5) == 0
	(8 % 6) == 0
	(8 % 7) == 0	
*/

	int iCnt = 0;
	
	printf("Factors are : \n");
	
	for(iCnt = 1; iCnt < iNo; iCnt++) 	// O(N)
	{
		if((iNo % iCnt) == 0)
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
	
	DisplayFactors(iValue);
	
	return 0;
}