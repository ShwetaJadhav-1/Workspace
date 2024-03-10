#include<stdio.h>


int main(int argc, char *argv[])
{
    printf("Number of arguments are : %d\n",argc);

    printf("Name of executable is : %s\n",argv[0]);

    return 0;
}

/*
D:\Marvellous\LB\Code\9FileManipulation>exe.exe
Number of arguments are : 1
Name of executable is : exe.exe
*/

/*
D:\Marvellous\LB\Code\9FileManipulation>exe.exe Demo
Number of arguments are : 2
Name of executable is : exe.exe
*/