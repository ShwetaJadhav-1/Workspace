#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
}

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE; 

class SinglyLL
{
    public:
        // Characteristics
        PNODE First;

        // Below all are behaviour
        SinglyLL();

        void InsertFirst(int no);   // while declaring function in class 
        // there is no need add variable name :- no, only int is enough
        void InsertLast(int no);
        void InsertAtPosition(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
        // Count() is replaced by iCnt class variable
        int Count();        // This all are function declaration
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

} 
*/

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;  // Jevadhe object tevadhe linked list tayar hotil

    return 0;
}