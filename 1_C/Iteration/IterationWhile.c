#include<stdio.h>

int main()
{
	int iCnt = 0;
	
	iCnt = 1;  //  1
	
/*	while(iCnt < 6);  // 2     Withou error run hotana while loop la adaknar-condition mule :: 
	// Program Abort karayche Ctrl+c -- OS la return 1 janar.
	{
		printf("Jay Ganesh...\n");  // 4
		iCnt++;  // 3
	}   */
	
	while(iCnt < 6)  // 2
	{
		printf("Jay Ganesh...\n");  // 4
		iCnt++;  // 3  
	}
	
	return 0;
}