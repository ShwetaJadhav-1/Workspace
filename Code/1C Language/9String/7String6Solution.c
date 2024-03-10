#include<stdio.h>
#include<stdbool.h>

int main()
{
    char cValue[50];
    bool bRet = false;

    printf("Please enter your full name\n");
    //scanf("%s",cValue); // Name of array is internally considered as a base address of a array
    scanf("%[^'\n']s",cValue);

    // regular expression = regex
    // ^ = tilda : not operator
    // gets = use of this may occur buffer overflow
    // '/n' = tasach rahato 
    // flush() = used to remove '\n'

    printf("Your name is : %s\n",cValue);

    return 0;
}