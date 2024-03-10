#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    int Ret = 0;
    
    Ret = fork();

    if(Ret ==0)     // Child
    {
        execl("./ChildProcess2","Demo","Hello","Marvellous",NULL);
        // Parameter 1 : Name of executable
        // Parameter 2 : Multiple values seperated by , which are considered as commans line argument
        // Parameter 3 : Environment variable (NULL)
    }
    else            // Parent
    {
        printf("Parent is running with PID : %d\n",getpid());
    }

    return 0;
}
