#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    int fd = 0;
    struct stat sobj;

    if(argc != 2)
    {
        printf("Insufficient argument");
        return -1;
    }

    fd = open(argv[1],O_RDONLY);
    fstat(argv[1],&sobj);

    printf("File Name : %s\n",argv[1]);
    printf("File size is : %d\n",sobj.st_size);
    printf("Number of links : %d\n",sobj.st_nlink);
    printf("Inode number : %d\n",sobj.st_ino);
    printf("file System number : %d\n",sobj.st_dev);
    printf("Number of blocks : %d\n",sobj.st_blocks);

    return 0;
}