#include<stdio.h>

extern int Add(int,int);

int main()
{
	int a = 11, b = 10;
	int ret = 0;
	
	ret = Add(a,b);
	
	printf("ret = %d",ret);
	
	return 0;
}