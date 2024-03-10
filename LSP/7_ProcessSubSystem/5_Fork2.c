#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
    int Ret = 0;
    int PID = 0;

    Ret = fork();

    if(Ret == 0)  // Child
    {
        printf("Child process is running\n");
        printf("Child says : PID of parent process is : %d\n",getppid());
        printf("Child says : PID of child process is : %d\n",getpid());
    }
    else            // Parent
    {
        printf("Parent process is running\n");
        printf("Parent says : PID of child process is : %d\n",Ret);
        printf("Parent says : PID of parenr process is : %d\n",getpid());
        printf("Parent says : PID of parent process of parent process ie terminal is : %d\n",getppid());
    }

    return 0;
}
/* 
Parent :
3882
3831
3669 : terminal cha

Child 
3831
3832


*/