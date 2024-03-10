#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 9.09;
	double d = 89.9078;
	
	char *cp = &ch;
	int *ip = &i;
	float *fp = &f;
	double *dp = &d;
	
	void *vp = &ch;
	
	printf("Value of ch : %c\n",ch);
	printf("Address of ch : %p\n",&ch);	
	printf("Value inside cp : %p\n",cp);
	printf("Data refer ny cp : %c\n",*cp);
	printf("size of ch : %d\n",sizeof(ch));
	printf("size of cp : %d\n",sizeof(cp));
	
	//printf("Data refer by vp : %c\n",*vp); // error :- Argument type 'void' is incomplete.
	printf("Data refer by vp : %c\n",*(char *)vp);  // (char *):- Type Casting
	
	vp = &i;
	printf("Data refer by vp : %d\n",*(int *)vp);
	
	return 0;
}