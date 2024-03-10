#include<stdio.h>

int main()
{
	// All the below allocation are static memory allocation
	
	// First way to initialise the array
	int Arr[4] = {10,20,30,40};  // Member Initialisation list = {}
	
	// Second way to initialise the array
	int Brr[] = {10,20,30,40};  // Member Initialisation list without size = {}
	
	// Third way to initialise the array
	int crr[4];
	// Memeber by member initialisation
	Crr[0] = 10;
	Crr[1] = 20;
	Crr[2] = 30;
	Crr[3] = 40;

	return 0;
}