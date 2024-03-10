#include<stdio.h>

int func()
{
	auto int i;
	register auto int j = 20;
	
	int ret = 0;
	ret = i + j;
	
	return ret;
	
}

int main()
{
	printf("Inside main\n");
	fun();
	return 0;
}