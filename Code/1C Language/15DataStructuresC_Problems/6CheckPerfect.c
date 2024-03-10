#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;  // self referential
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
// All Declaration are global. Easy to access for all functions

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));// 1 Allocate memory

    PNODE temp = *First; 

    newn -> data = no;
    newn -> next = NULL;

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else                // If linked list contains atleast one node
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the linked list are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

bool CheckPerfect(int iNo)
{
    int iSum = 0, iTemp = iNo;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return (iSum == iTemp);    
}

void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First->data) == true)
        {
            printf("%d is a perfect number\n",First->data);
        }
        else
        {
            printf("%d is not a perfect number\n",First->data);
        }
        First = First->next;
    }
}

int main()
{
    bool iRet = 0;
    PNODE Head = NULL;
    
    InsertLast(&Head, 11); 
    InsertLast(&Head, 28); 
    InsertLast(&Head, 51); 
    InsertLast(&Head,496);
    InsertLast(&Head,111);
    InsertLast(&Head,8128);
    Display(Head);

    DisplayPerfect(Head);
    
    return 0;
}
