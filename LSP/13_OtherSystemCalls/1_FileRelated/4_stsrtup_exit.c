//Program to demostrate startup and exit using #pragma.
#include<stdio.h>
void fun();
void sun() ;

void fun()
{
printf("\nIn fun..\n");
}

void sun()
{
printf("\nIn sun...\n");
}

#pragma startup fun
#pragma exit sun

int main()
{
printf("\nIn main...\n");
return 0;
}
