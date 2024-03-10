#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = NULL;
	int *q = NULL;
	
	p = (int *)malloc(10 * sizeof(int));
	
	// use the memory
	
	q = (int *)realloc(p, 15 * sizeof(int));  // increasing memory 	
	// p = realloc = memory aadhiche pn jate
	// q = realloc = aadhiche memory rahnar
	
	if(q == NULL)
	{
		printf("Realloc fails\n");
		q = p;		
	}
	
	// use the memory
	
	free(q);
	
	return 0;
}