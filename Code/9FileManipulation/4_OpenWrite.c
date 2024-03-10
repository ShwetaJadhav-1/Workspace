#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>  // universal standard :- fwrite

int main()
{
    char Fname[20];  
    char Data[] = "Marvellous";   
    int fd = 0;         

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);    

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd %d\n",fd);
        write(fd,Data,10);
    }

    return 0;
}