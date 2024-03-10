// Accept the number from user and check whether the naumber is perfect or not

#include<stdio.h>
#include<stdbool.h>

bool CheckNonPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	printf("Non factors of %d are : \n",iNo);
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\t",iCnt);

		}
	}
}
// 6	 28		496		8128

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	CheckNonPerfect(iValue);
	
	return 0;
}