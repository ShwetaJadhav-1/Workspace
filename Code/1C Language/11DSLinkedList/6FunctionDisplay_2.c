#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    // Step1 : Alllocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    // Step2 : Initialize the node
    newn -> data = No;
    newn -> next = NULL;

    // step3 : Check Linked List is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else // if Linked List contains atleast one node
    {
        newn -> next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements of linked list are : \n");
    while(First != NULL)
    {
        printf("| %d | -> ",First->data);
        First = First -> next;
    }
    printf("/n");
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    return 0;
}