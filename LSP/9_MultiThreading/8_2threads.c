#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<pthread.h>

// void *_______(void *________) :- Fixed
void * ThreadProc1(void *ptr)
{
    printf("Inside Thread 1\n");

    pthread_exit(NULL); 
}

void * ThreadProc2(void *ptr)
{
    printf("Inside Thread 2\n");

    pthread_exit(NULL); 
}

int main()
{
    pthread_t TID1, TID2;
    int ret1 = 0, ret2 = 0;

    ret1 = pthread_create(&TID1,   // Address of pthread_t structure object
                    NULL,        // Thread attributes
                    ThreadProc1,  // Address of callback function
                    NULL);        // Parameters to callback function

    if(ret1 != 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }
    printf("Thread 1 is created with ID : %lu\n",TID1);

    ret2 = pthread_create(&TID2,   // Address of pthread_t structure object
                NULL,        // Thread attributes
                ThreadProc2,  // Address of callback function
                NULL);        // Parameters to callback function

    if(ret2 != 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }
    printf("Thread 2 is created with ID : %lu\n",TID2);

    pthread_join(TID1,NULL);    
    pthread_join(TID2,NULL);   

    printf("End of main thread\n");

    pthread_exit(NULL); // main thread

    return 0;
}
