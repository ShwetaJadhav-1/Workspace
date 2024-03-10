#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iArr[5];    // static memory allocation

    printf("Enter the elements : \n");

    scanf("%d",&iArr[0]);
    scanf("%d",&iArr[1]);
    scanf("%d",&iArr[2]);
    scanf("%d",&iArr[3]);
    scanf("%d",&iArr[4]);

    printf("Elements from array are : \n");

    printf("%d\n",iArr[0]);
    printf("%d\n",iArr[1]);
    printf("%d\n",iArr[2]);
    printf("%d\n",iArr[3]);
    printf("%d\n",iArr[4]);

    return 0;
}