#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<pthread.h>

// void *_______(void *________) :- Fixed
void * ThreadProc(void *ptr)
{
    int i = 0;
    printf("Inside Thread\n");

    for(i = 1; i <= 1000; i++)
    {
        printf("Thread with counter : %d\n",i);
    }
}

int main()
{
    pthread_t TID;
    int ret = 0;

    ret = pthread_create(&TID,   // Address of pthread_t structure object
                    NULL,        // Thread attributes
                    ThreadProc,  // Address of callback function
                    NULL);        // Parameters to callback function

    if(ret != 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }

    printf("Thread is created with ID : %lu\n",TID);

    printf("End of main thread\n");

    return 0;
}
