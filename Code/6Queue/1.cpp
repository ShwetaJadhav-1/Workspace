#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    public:
        struct node *First;
        int iCount;

        Queue();

        bool IsQueueEmpTY();
        void EnQueue(int no);   // InsertLast
        int DeQueue();   // DeleteFirst
        void Dispaly();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue :: EnQueue(int no)       // InsertLast  
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
        struct node *temp = First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
    cout<<no<<"gets EnQueued in the Queue successfully"<<"\n";
}

bool Queue :: IsQueueEmpTY()
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

int Queue :: DeQueue()   // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Queue is empty"<<"\n";
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

void Queue :: Dispaly()
{
    if(First == NULL)
    {
        cout<<"Queue is empty"<<"\n";
    }
    else
    {
        cout<<"Elements of Queue are : "<<"\n";

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
    Queue obj;

    obj.EnQueue(11);
    obj.EnQueue(21);
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Dispaly();
    
    int iRet = obj.DeQueue();
    cout<<"DeQueued element is : "<<iRet<<"\n";

    iRet = obj.DeQueue();
    cout<<"DeQueued element is : "<<iRet<<"\n";

    obj.Dispaly();

    return 0;
}