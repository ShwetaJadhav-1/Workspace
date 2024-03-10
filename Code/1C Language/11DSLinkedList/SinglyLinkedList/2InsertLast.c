#include<stdio.h>
#include<stdlib.h>

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

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));// 1 Allocate memory

    newn -> data = no;
    newn -> next = NULL;

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else                // If linked list contains atleast one node
    {
        newn -> next = *First;
        *First = newn;
    }
}

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

int  Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;
    
    InsertFirst(&Head, 51); // InsertFirst(60,51)
    InsertFirst(&Head, 21); // InsertFirst(60,11)
    InsertFirst(&Head, 11); // InsertFirst(60,11)
    

    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,111);

    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}

/* 
    InsertFirst()
    InsertLast()
    InsertAtPosition()

    DeleteFirst()
    DeleteLast()
    DeleteAtPosition()

    Display()
    Count()
*/