#include<stdio.h>

int main()
{
    int i = 0;
    printf("_____________________________\n");
    printf("ASCII table\n");
    printf("_____________________________\n");

    printf("Character\t Decimal\t Hex\t Octal\n");

    for(i = 0; i <= 127; i++)
    {
        printf("%c \t %d \t %x \t %o \t\n",i,i,i,i);
    }

     printf("_____________________________\n");

    return 0;
}