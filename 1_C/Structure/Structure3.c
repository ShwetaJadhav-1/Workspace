#include<stdio.h>

struct Student
{
	int Marks;
	int Age;
	char Division;
};

int main()
{
	struct Student Amit;
	struct Student *ptr = NULL;
	
	ptr = &Amit;
	
	// Indirect Accessing Operator
	ptr -> Marks = 90;
	ptr -> Age = 21;
	ptr -> Division = 'A';
	
	return 0;
}