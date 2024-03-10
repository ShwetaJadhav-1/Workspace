#include<stdio.h>

/*struct Demo
{ 
	int i;     // 4
	char ch;   //1
	char ch1;  // 1
	float f;   //4
//	double d;  //8
	float d;   // 4 total 13 without ch1:
};// total 17  
// with ch1 = total = 14
*/

struct Demo
{
	int i;
	char ch1;
	float f;
	char ch;
	float d;
}; // Total = 14

int main()
{
	struct Demo dobj;
	
	printf("Size of structure is : %d\n",sizeof(dobj)); // 24
	// double replace float = 16
	// with ch1 = 16
	// **second struct = 20
	
	return 0;
}