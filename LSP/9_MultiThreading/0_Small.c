#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    int fd = 0, i = 0;
    char Buffer[512];
    int iCnt = 0;
    int Ret = 0;

    fd = open("Demo.txt",O_RDONLY);

    while((Ret = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < Ret; i++)
        {
            if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
            {
                iCnt++;
            }
        }
    }

    printf("Number of small characters are : %d\n",iCnt);

    close(fd);
    
    return 0;
}
