#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    int Ret = 0;
    int cpid = 0;
    int Exit_Status = 0;
    
    Ret = fork();

    if(Ret ==0)     // Child
    {
        execl("./ChildProcess","NULL",NULL);
    }
    else            // Parent
    {
        printf("Parent is running with PID : %d\n",getpid());
        cpid = wait(&Exit_Status);
        printf("Child process terminated havind PID %d with exit status %d\n",cpid,Exit_Status);
    }

    return 0;
}
