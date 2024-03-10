#include<stdio.h>
#include "SharedFile.h"

int main()
{
    int a = 10, b = 11, ret = 0;

    ret = Addition(a,b);

    printf("Addition is : %d\n",ret);

    return 0;
}

// gcc Client.c -o exe : aadhi use krt asleli

// gcc -static Client.c -o exe SharedFile.a : ata use karayche ahe te

// ./exe

