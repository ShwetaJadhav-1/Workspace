#include<stdio.h>

// Function Defination
void Fun()
{
	printf("Inside Func\n");
}
int main()
{
	Fun();  // Function call
	
	void (*fptr)();
	//fptr is a pointer which points to the function that function accepts nothing and 
	//that function returns nothing.
	
	fptr = Fun;	
	
	fptr();  // call jail jyacha address fptr madhe ahe.
	
	return 0;
}

//int (*fptr)(int,int);

// fptr1 is a pointer which points to the function which accepts 2 parameters
// first is integer and second is integer, function returns integer.