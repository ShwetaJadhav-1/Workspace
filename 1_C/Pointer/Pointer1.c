#include<stdio.h>

int main()
{
	int no = 11;
	
	int *p = &no; // * = Pointer  :  * = DereferenceOperator  :  * = Multiplication
	
	
	printf("%d\n",no);  // 11
	printf("%d\n",p);   // 100
	printf("%p\n",&no); // 100
	printf("%p\n",&p);  // 200
	printf("%d\n",sizeof(no)); // 4 bytes
	printf("%d\n",sizeof(p));  // 8 bytes
	/*
	int no1 = 15;
	printf("%d\n",no);  // 11
	printf("%p\n",&no1); //'&' Address--100 imaginary %p = Address in Hex=0000007d06dffd9c : %d = Address in Int=-1845496052
	// without '&' no=000000000000000b : without '&' no1=000000000000000f
	printf("%d\n",sizeof(no)); // 'sizeof' = 4 */
	
	return 0;
}