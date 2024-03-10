#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];     // File Name
    int fd = 0;         // File Descriptor

    printf("Enter the file name that you want to create : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);     // fcntl file chya header file madhe ahe
    // Here 0 Indicates Octal Number
    // 7 = 4 + 2 + 1
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is successfully is created with FD %d\n",fd);
    }

    return 0;
}