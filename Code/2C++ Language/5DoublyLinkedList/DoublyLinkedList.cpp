#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      // X
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    public:
        // Characteristics
        PNODE First;
        int iCount;

        // Behaviours
        DoublyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no ,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

DoublyLL :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL :: InsertFirst(int no)
{
    // Step1 : Allocate memory for node
    PNODE newn = new NODE;

    // Step2 : Initialise node
    newn -> data = no;
    newn -> next =  NULL;
    newn -> prev = NULL;      // X

    // Step3 : Check if LL is empty or not
    if(First == NULL)   // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains atleast one node
    {
        newn -> next = First;
        First -> prev = newn;       // X 
        First = newn;
        iCount++;
    }
}

void DoublyLL :: InsertLast(int no)
{
    // Step1 : Allocate memory for node
    PNODE newn = new NODE;

    // Step2 : Initialise node
    newn -> data = no;
    newn -> next =  NULL;
    newn -> prev = NULL;    // X

    // Step3 : Check if LL is empty or not
    if(First == NULL)   // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains atleast one node
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;    // X
        iCount++;
    }
}

void DoublyLL :: InsertAtPosition(int no, int ipos)
{
    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE;

        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;    // X

        PNODE temp = First;
        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn -> next = temp -> next;
        temp->next->prev = newn;    // X
        temp -> next = newn;
        newn -> prev = temp;        // X

        iCount++;
    }
}

void DoublyLL :: DeleteFirst()
{
    if(First == NULL)   // if(iCount == 0)
    {
        return;
    }
    else if(First -> next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        First = First -> next;        
        delete (temp -> prev);      // X
        First -> prev = NULL;       // X
        iCount--;
    }
}

void DoublyLL :: DeleteLast()
{    
    if(First == NULL)   // if(iCount == 0)
    {
        return;
    }
    else if(First -> next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;

        iCount--;
    }
}

void DoublyLL :: DeleteAtPosition(int ipos)
{
    if((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = First;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1 -> next;
        }

        PNODE temp2 = temp1 -> next;

        temp1 -> next = temp2 -> next;
         temp2->next->prev = temp1;  // X
        delete temp2;

        iCount--;
    }
}

void DoublyLL :: Display()
{
    cout<<"Elements of Linked List are : "<<"\n";
    PNODE temp = First;
    cout<<"NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}


int main()
{
    int iRet = 0;
    DoublyLL obj1;

    obj1.InsertFirst(51);
    obj1.Display();

    obj1.InsertFirst(21);
    obj1.Display();

    obj1.InsertFirst(11);
    obj1.Display();

    obj1.InsertLast(101);
    obj1.Display();

    obj1.InsertLast(111);
    obj1.Display();

    obj1.InsertLast(121);
    obj1.Display();
    cout<<"Number of nodes in linkedlist are : "<<obj1.iCount<<"\n";

    obj1.InsertAtPosition(105,5);
    obj1.Display();
    obj1.DeleteAtPosition(5);
    obj1.Display();
    cout<<"Number of nodes in linkedlist are : "<<obj1.iCount<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.Display();
    cout<<"Number of nodes in linkedlist are : "<<obj1.iCount<<"\n";

    return 0;
}