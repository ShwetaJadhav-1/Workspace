// Display Jay Ganesh on the screen 

#include<stdio.h>

void Display(int iValue)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)	// Dynamic loop
	{
		printf("Jay Ganesh...\n");
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter number of iterations : \n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}