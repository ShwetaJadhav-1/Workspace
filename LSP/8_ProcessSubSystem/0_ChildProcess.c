#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    printf("Inside child process - PID of parent process is %d\n",getpid());

    return 0;
}
