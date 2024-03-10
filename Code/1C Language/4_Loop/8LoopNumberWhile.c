// Display Continuos number on screen

#include<stdio.h>

void Number(int iValue)
{
	int iCnt = 0;
	
	iCnt = 1;
	while(iCnt <= iValue)
	{
		printf("Marvellous : %d\n",iCnt);
		iCnt++;
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter the Number  : \n");
	scanf("%d",&iNo);
	
	Number(iNo);
	
	return 0;
}