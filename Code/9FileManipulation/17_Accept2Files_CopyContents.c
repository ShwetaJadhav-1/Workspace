#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname1[20];
    char Fname2[20];

    char Data[100];   
    int fdSource = 0, fdDest = 0, Length = 0; 
    int Count = 0, i = 0;        

    printf("Enter the file name which contains the data : \n");
    scanf("%s",Fname1);

    fdSource = open(Fname1, O_RDONLY);

    if(fdSource == -1)
    {
        printf("unable to open file\n");
        return -1;
    }

    printf("Enter the file name that you want to create :  \n");
    scanf("%s",Fname2);

    fdDest = creat(Fname2,0777);
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

    return 0;
}