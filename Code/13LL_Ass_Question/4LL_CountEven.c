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

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int EvenCount(PNODE First, int No)
{
    int Counter = 0;
    
    while(First != NULL)
    {
        if(((First->data) % 2) == 0)
        {
            Counter++;
        }
        First = First->next;
    }
    return Counter;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 151);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 121);// InsertFirst(60,51)
    InsertFirst(&Head, 111);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 51);// InsertFirst(60,51)
    InsertFirst(&Head, 21);// InsertFirst(60,21)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 11);// InsertFirst(60,11)
    
    Display(Head);

    iRet = EvenCount(Head, 101);
    printf("Even count of element 101 is %d\n",iRet);

    return 0;
}
