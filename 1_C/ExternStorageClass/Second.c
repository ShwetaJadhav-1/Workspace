#include<stdio.h>

// INitialised global variable
int iNo1 = 11;

// Non initialised global variable.
int iNo2;

// Initialised static global variable
static int A = 10;

// Non-Initialised static variable
static int B;   

void Demo()
{
	int X = 10;
	static int Y = 20;
	printf("Inside Demo\n");
}


// Data Segment Partition:
/* Non Initialised global
BSS :- Block Starting with Symbol

Initialised global
Non-BSS :- Block Starting with Value */