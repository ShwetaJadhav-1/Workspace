#include<stdio.h>
#include "SharedFile.h"

int Addition(int no1, int no2)
{
    int iAns = 0;
    iAns = no1 + no2;
    return iAns;
}

// convert .c to .o
// gcc -c SharedFile.c -o SharedFile.o

// Convert .o to .a
// ar rcs SharedFile.a SharedFile.o

// ar : archieve