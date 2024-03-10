#include<stdio.h>

// Structure Declaration
// There is no memory allocation at this point : Not any member is initialised.
struct Demo
{
	int i;     // 4
	float f;   // 4
	int j;     // 4
	double d;  // 8   Total size of structure is 20 bytes.	
}; // flat cha layout 

int main()
{
	// Structure object / variable creation
	// Memory gets allocated at this point
	struct Demo obj1;  // 20 byte
	struct Demo obj2;  // 20 byte
	struct Demo obj3;  // 20 byte
	
	// Member Initialisation
	obj1.d = 11.0;
	obj2.i = 21;
	obj3.j = 51;
	
	printf("size of obj1 is : %d\n",sizeof(obj1)); // 20/24
	printf("size of obj2 is : %d\n",sizeof(obj2)); // 20/24
	printf("size of obj3 is : %d\n",sizeof(obj3)); // 20/24- Padding 
	
	printf("i of obj2 is : %d\n",obj2.i); // 21
	printf("d of obj1 is : %lf\n",obj1.d);
	printf("j of obj3 is : %d\n",obj3.j);
	return 0;
}