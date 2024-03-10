#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE; 

class SinglyLL
{
    public:
        PNODE First;
        int iCnt;

        SinglyLL();

        void InsertFirst(int no);   
        void InsertLast(int no);
        void InsertAtPosition(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();       
};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCnt = 0;  
}

void SinglyLL :: InsertFirst(int no)
{
    // step 1 : Allocate the memory for node
    PNODE newn = new NODE;

    // step 2 : Initialise the node
    newn -> data = no;
    newn -> next = NULL;

    // step 3 : Check if LL is empty or not
    if(First == NULL)   // if(iCnt == 0)
    {
        First = newn;
        iCnt++;
    }
    else    // If LL contains atleast one node
    {
        newn -> next = First;
        First = newn;
        iCnt++;
    }
}

void SinglyLL :: InsertLast(int no)
{
    // step 1 : Allocate the memory for node
    PNODE newn = new NODE;

    // step 2 : Initialise the node
    newn -> data = no;
    newn -> next = NULL;

    // step 3 : Check if LL is empty or not
    if(First == NULL)   // if(iCnt == 0)
    {
        First = newn;
        iCnt++;
    }
    else    // If LL contains atleast one node
    {
            
    }
}

void SinglyLL :: InsertAtPosition(int no, int ipos)
{

}

void SinglyLL :: DeleteFirst()
{

}

void SinglyLL :: DeleteLast()
{

}

void SinglyLL :: DeleteAtPosition(int ipos)
{

}

void SinglyLL :: Display()
{
    cout<<"Elements of linked list are : "<<"\n";

    PNODE temp = First;

    while (temp != NULL)
    {
        cout<<" | "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}


int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    cout<<"Linked list of first object is : "<<"\n";
    obj1.Display();

    cout<<"Number of nodes in first is : "<<obj1.iCnt<<"\n";

    obj2.InsertFirst(100);
    obj2.InsertFirst(200);
    obj2.InsertFirst(300);
    obj2.InsertFirst(400);

    cout<<"Linked list of second object is : "<<"\n";
    obj2.Display();

    cout<<"Number of nodes in second LL is : "<<obj2.iCnt<<"\n";

    /* obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();

    cout<<"Number of nodes are : "<<obj1.iCnt<<"\n"; */

    return 0;
}