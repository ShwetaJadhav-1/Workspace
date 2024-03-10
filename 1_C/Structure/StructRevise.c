#include<stdio.h>

struct Demo
{
	int A;
	int B;
};

struct Demo obj;  // 8 bytes
struct Demo *ptr; // 8 Bytes because of pointer variable.

ptr = &obj;

obj.A = 11;
ptr -> A = 11;

struct Demo obj[6]; // 48 bytes


