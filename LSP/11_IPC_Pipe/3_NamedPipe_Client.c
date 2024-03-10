#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Buffer[100];

    printf("Client is running and reading the data from named pipe...\n");
    fd = open("Demo",O_RDONLY);

    read(fd,Buffer,10);

    printf("Data from pipe is : %s\n",Buffer);

    return 0;
}
