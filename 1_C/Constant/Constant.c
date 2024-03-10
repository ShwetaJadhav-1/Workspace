#include<stdio.h>

const int no1 = 10;
const int no2;  // Storage class auto ahe. Non-init mule garbage ne init honar.
// so compulsory init the const.

int main()
{
	const int no3 = 10;
	const int no4;
	
	return 0;
}