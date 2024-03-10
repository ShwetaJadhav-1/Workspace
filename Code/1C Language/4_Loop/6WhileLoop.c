// Display Jay Ganesh on the screen 

#include<stdio.h>

void Display(int iValue)
{
	int iCnt = 0;
	
	iCnt = 1;
	while(iCnt <= iValue)
	{
		printf("Jay Ganesh...\n");
		iCnt++;
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