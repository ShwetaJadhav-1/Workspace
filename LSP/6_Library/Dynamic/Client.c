#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>

int main()
{
    void *ptr = NULL;
    void (*fptr)();

    ptr = dlopen("/",RTLD_LAZY); // runtime load lazy: RAM vr asel tr ti vapar
    if(ptr == NULL)
    {
        printf("Unable to load library\n");
        return -1;
    }

    fptr = dlsym(ptr,"Display");
    if(fptr == NULL)
    {
        printf("Unable to load the address of function\n");
        return -1;
    }

    fptr();
    return 0;
}

// gcc -rdynamic -o exe Client.c
// gcc -ldl -o exe Client.c

// /.exe