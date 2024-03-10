#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];  
    char Data[100];   
    int fd = 0, Length = 0; 
    int Size = 0;        

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }
    while((Length = read(fd,Data,sizeof(Data))) != 0 )
    {
        Size = Size + Length;
    }
    printf("Size of the file is %d bytes\n",Size);
    close(fd);

    return 0;
}