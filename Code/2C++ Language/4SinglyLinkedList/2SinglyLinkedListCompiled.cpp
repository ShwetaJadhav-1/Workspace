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
typedef struct node ** PPNODE; // Not needed

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

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

} 
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCnt = 0;   // ethe kuthehi resource allocation nahi
    // Initialised the characteristics of class
}

void SinglyLL :: InsertFirst(int no)
{

}

void SinglyLL :: InsertLast(int no)
{

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

}


int main()
{
    SinglyLL obj1;

    cout<<"Size of obj1 is : "<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCnt<<"\n";

    return 0;
}