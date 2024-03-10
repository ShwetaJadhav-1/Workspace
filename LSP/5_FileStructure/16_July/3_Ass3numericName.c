#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<sys/dir.h>
 /* source and destination directory should be present */

int main(int argc, char *argv[])
{
    DIR *dp = NULL;
    struct direct *entry = NULL;
    char oldname[350];
    char newname[350];
    int iCnt = 1;

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }    
    
    while((entry = readdir(dp)) != NULL)
    {
        sprintf(oldname,"%s/%s",argv[1],entry->d_name);
        sprintf(newname,"%s/%d.txt",argv[1],iCnt);

        rename(oldname,newname);
        iCnt++;
    }

    closedir(dp);

    return 0;
}