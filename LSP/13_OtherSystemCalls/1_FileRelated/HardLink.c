#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<string.h>

int main()
{
	char Filename1[30], Filename2[30];
	int Ret = 0;

	printf("Enter the existing File name : \n");
	scanf("%s",Filename1);

	printf("Enter the name for hardlink : \n");
	scanf("%s",Filename2);

	Ret = link(Filename1,Filename2);

	if(Ret == 0)
	{
		printf("Hardlink gets created successfully ....\n");
	}

	return 0;
}
