#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>

int main()
{
    int fd = 0;

    //char *path = "/tmp/mypipe";
    //fd = mkfifo(path,0666);

    fd = mkfifo("Demo",0777);

    if(fd == -1)
    {
        printf("Unable to create named pipe\n");
        return -1;
    }

    printf("Server is running and writting the data into named pipe...\n");

    fd = open("Demo",O_WRONLY);

    write(fd,"Marvellous",10);

    close(fd);
   // unlink("Demo");
    printf("Data successfully written in the pipe\n");

    return 0;
}



