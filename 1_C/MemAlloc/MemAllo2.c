#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	int *Arr = NULL;
	
	printf("enter the size of array\n");
	scanf("%d",&size);  // 7
	
	Arr = (int *)malloc(sizeof(int) * size);
	// Arr = (int *)malloc(28)
	
	printf("%d",Arr);
	
	// Use the memory
	
	free(Arr);
	
	return 0;
}