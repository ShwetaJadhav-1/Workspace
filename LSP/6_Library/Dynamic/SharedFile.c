#include<stdio.h>
#include "SharedFile.h"

void Display()
{
    printf("Jay Ganesh...\n");
}

// To crete .o file
// gcc -c -fPic SharedFile.c

// To create .so file
// gcc -shared -o library.so SharedFile.o