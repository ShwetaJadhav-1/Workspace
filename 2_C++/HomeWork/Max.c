#include<stdio.h>

int Max(int no1, int no2)
{
	if(no1 > no2)
		return no1;
	else if(no2 > no1)
		return no2;
	else
		return 0;
}

int main()
{
	int A,B,C = 0;
	printf("Please enter any two numbers\n");
	scanf("%d%d",&A,&B);
	
	C = Max(A, B);
	if(C != 0)
		printf("%d is maximum number\n",C);
	else
		printf("Both numbers are same\n");		
	
	return 0;
}