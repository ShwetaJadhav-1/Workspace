#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}

class Stack
{
    public:
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpTY();
        void Push(int no);      // Insert
        int Pop();              // Delete
        void Dispaly();
};

Stack :: Stack()
{

}

void Stack :: Push(int no)
{

}

bool Stack :: IsStackEmpTY()
{

}

int Stack :: Pop()
{

}

void Stack :: Dispaly()
{

}

inr main()
{


    return 0;
}