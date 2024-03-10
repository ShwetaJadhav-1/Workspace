#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<pthread.h>

int Counter = 0;  // resource

void * ThreadProc(void *ptr)
{
    int i = 0;
    Counter++;
    printf("Thread executed with Counter : %d\n",Counter);
    for(i = 0; i < 0xFFFFFFFF; i++);  // room changing sathi // sleep chya aivaji
    printf("Thread completed with counter : %d\n",Counter);
    pthread_exit(NULL);
}

int main()
{
    pthread_t TID1, TID2;
    int ret = 0;
    int no = 11;
    int value = 0;

    ret = pthread_create(&TID1,          // Address of pthread_t structure object
                    NULL,               // Thread attributes
                    ThreadProc,         // Address of callback function
                   NULL);         // Parameters to callback function

    if(ret != 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }

    ret = pthread_create(&TID2,          // Address of pthread_t structure object
                    NULL,               // Thread attributes
                    ThreadProc,         // Address of callback function
                    NULL); 

    if(ret != 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }

    pthread_join(TID1,NULL);
    pthread_join(TID2,NULL);
   

    printf("End of main thread\n");

    pthread_exit(NULL); // main thread

    return 0;
}


//  Thread executed with Counter : 1
// Thread executed with Counter : 2

// Thread completed with counter : 2
// Thread completed with counter : 2
