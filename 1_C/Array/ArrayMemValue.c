#include<stdio.h>

int main()
{
	int Arr[4] = {10,20};
	int Brr[4];
	
	printf("%d\n",Arr[0]);  // 10
	printf("%d\n",Arr[1]);  // 20
	printf("%d\n",Arr[2]);  // ? -- 0
	printf("%d\n",Arr[3]);  // ? -- 0  Compulsory
	
	Brr[0] = 10;
	Brr[1] = 20;
	
	printf("%d\n",Brr[0]);  // 10
	printf("%d\n",Brr[1]);  // 20
	printf("%d\n",Brr[2]);  // Garbage or 0
	printf("%d\n",Brr[3]);  // Garbage or 0

	return 0;
}