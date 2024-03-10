#include<stdio.h>

struct Demo
{
	int i;		//4
	float f;	//4
	double d;	//8
};//16

union Hello
{
	int i;       //4
	float f;	// 4
	double d;	//8
};//8

int main()
{
	struct Demo dobj;
	union Hello hobj;
	
	printf("Size of Structure : %d\n",sizeof(dobj)); // 16
	printf("Size of Union : %d\n",sizeof(hobj));  // 8
	
	dobj.i = 11;
	dobj.f = 90.8;
	dobj.d = 90.5;
	
	hobj.f = 90.4;
	printf("%f\n",hobj.f);  //90.4
	printf("%f\n",hobj.d); //0.00000
	
	hobj.d = 90.4;
	printf("%f\n",hobj.f);  //0.0000
	printf("%f\n",hobj.d); //90.4
	return 0;
}