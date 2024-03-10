#include<stdio.h>
#include<string.h> // strlen

int main()
{
    char Arr[5] = {'a', 'b','c', 'd','\0'}; // member initialisation list
    
    char Brr[5] = "abcd"; // \0 added implicitely by compiler 
    
    char Crr[] = "abcd"; // 

    printf("%s\n",Arr); // abcd  (%s : Format Sprcifier)
    printf("%s\n",Brr); // abcd
    printf("%s\n",Crr); // abcd

    printf("Size of Arr : %d\n",sizeof(Arr));   // 5
    printf("Size of Brr : %d\n",sizeof(Brr));   // 5
    printf("Size of Crr : %d\n",sizeof(Crr));   // 5

    printf("Length of Arr : %d\n",strlen(Arr));   // 4
    printf("Length of Brr : %d\n",strlen(Brr));   // 4
    printf("Length of Crr : %d\n",strlen(Crr));   // 4

    return 0;
}