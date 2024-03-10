#include<stdio.h>
#include<stdlib.h>

struct Demo
{
	int i;
	float f;
};

int main()
{
	struct Demo obj;  // Static memory allocation
	
	struct Demo *ptr = NULL;
	ptr = (struct Demo *)malloc(sizeof(struct Demo));  // Dynamic memory allocation
	
	printf("%d\n",ptr);
	
	obj.i = 11;
	obj.f = 9.0;
	
	ptr -> i = 11;
	ptr -> f = 9.0;
	
	printf("%d\n",obj.i);
	printf("%d\n",ptr -> i);
	
	printf("%f\n",obj.f);
	printf("%f\n",ptr -> f);
	
	free(ptr);
	
	printf("%d\n",ptr);
	
	ptr -> i = 12;
	ptr -> f = 11.5;
	
	printf("%d\n",ptr -> i);
	printf("%f\n",ptr -> f);
	
	printf("%d\n",ptr);
	
	free(ptr);
	
	printf("%d\n",ptr);
	// Code
	
	return 0;
}