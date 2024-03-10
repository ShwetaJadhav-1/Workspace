#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/shm.h>
#include<sys/stat.h>
#include<string.h>

int main()
{
    int shmid = 0;
    int shmsize = 100;
    int Key = 1234;
    char *ptr = NULL;

    printf("Server application running...\n");

    shmid = shmget(Key,shmsize,IPC_CREAT | 0666);

    printf("Shared memory allocated successfully...\n");

    ptr = shmat(shmid,NULL,0);

    if(ptr != NULL)
    {
        printf("Shared memory attached successfully...\n");
    }

    return 0;
}



