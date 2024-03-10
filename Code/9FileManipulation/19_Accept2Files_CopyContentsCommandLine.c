#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char Data[100];   
    int fdSource = 0, fdDest = 0, Length = 0; 
    int Count = 0, i = 0;        

    fdSource = open(argv[1], O_RDONLY);

    if(fdSource == -1)
    {
        printf("unable to open file\n");
        return -1;
    }

    fdDest = creat(argv[2],0777);
    if(fdDest == -1)
    {
        printf("unable to create second(new) file\n");
        return -1;
    }
    
    while((Length = read(fdSource,Data,sizeof(Data))) != 0 )
    {
        write(fdDest,Data,Length);
    }
  
    close(fdSource);
    close(fdDest);
    
    printf("Data Successfully copied...\n");

    return 0;
}

/*
D:\Marvellous\LB\Code\9FileManipulation>gcc 19_Accept2Files_CopyContentsCommandLine.c -o exe

D:\Marvellous\LB\Code\9FileManipulation>exe.exe Marvellous.txt Infosystems.txt
*/