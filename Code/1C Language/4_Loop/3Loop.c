// Demonstaration of iteration using for loop

#include<stdio.h>

void Display()
{
	int register iCnt = 0;
	
	for(iCnt = 1; iCnt <= 5; iCnt++)	// Static loop
	{
		printf("Jay Ganesh...\n");
	}
}

int main()
{
	Display();
	
	return 0;
}