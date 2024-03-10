#include<stdio.h>
// iNo1 is a integer which is defined external to this file
// Only Declaration. We cant initialize variable here.
extern int iNo1;
//iNo2 is a integer which is defined external to this file
extern int iNo2;

// Function Declaration:
// Demo is a function which accepts nothing and returns nothing.
extern  void Demo();

//void Demo();

int main()
{
	Demo();
	
	printf("Value of iNO1 is : %d\n",iNo1);
	printf("Value of iNO2 is : %d\n",iNo2);
	
	return 0;
}

// Command to execute :- 
// gcc First.c Second.c -o Linked
// Linked