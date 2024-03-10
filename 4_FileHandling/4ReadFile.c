#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // file control.h

int main()
{
    char Fname[20];
    int fd = 0;
    char Data[20];

    printf("Please enter file name that you want to Open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR); // O_RDONLY    O_WRONLY    O_RDWR  :- Inbuilt Macro like NULL
    
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    read(fd,Data,10);
    printf("Data from file is : %s \n",Data);

    close(fd);
    
    return 0;
}