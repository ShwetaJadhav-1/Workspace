#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Stack
{
    public:
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpTY();
        void Push(int no);      // InsertFirst
        int Pop();              // DeleteFirst
        void Dispaly();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

void Stack :: Push(int no)
{
    struct node *newn = new node;

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = First;
        First = newn;
    }
    iCount++;
    cout<<no<<"gets pushed in the stack successfully"<<"\n";
}

bool Stack :: IsStackEmpTY()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Stack :: Pop()
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty"<<"\n";
        return -1;
    }
    else
    {
        int value = First -> data;
        struct node *temp = First;

        First = First -> next;
        delete temp;

        iCount--;

        return value;
    }
}

void Stack :: Dispaly()
{
    if(First == NULL)
    {
        cout<<"Stack is empty"<<"\n";
    }
    else
    {
        cout<<"Elements of stack are : "<<"\n";

        struct node *temp = First;
        while(temp != NULL)
        {
            cout<<" | "<<temp->data<<" |-> ";
            temp = temp -> next;
        }
        cout<<" NULL "<<"\n";
    }
}

int main()
{
    Stack obj;

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);

    obj.Dispaly();
    
    int iRet = obj.Pop();
    cout<<"poped element is : "<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"poped element is : "<<iRet<<"\n";

    obj.Dispaly();

    return 0;
}