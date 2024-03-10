#include<stdio.h>

int main()
{
	float arr[] = {10.3,43.4,45.34,234.45};
	float *p = NULL;
	float *q = NULL;
	
	p = arr;
	q = &(arr[3]);
	
	printf("%d\n",p);
	printf("%d\n",q);
	
	printf("%f\n", *p); // 10.30
	printf("%f\n", *q); // 234.45
	
	printf("%f\n", *(p+2)); // 45.34
	printf("%f\n", *(p+1)); // 43.40
	
	printf("%f\n",p[1]); // 43.40
	
	printf("%f\n",*(2+arr)); // 45.34
	
	printf("%f\n", 0[arr]); // 10.30
	
	printf("%f\n",q-p); // 0.000
	printf("%d\n",q-p); // 3
	
	printf("%f\n", *(q-2)); // 43.40
	
	return 0;
}