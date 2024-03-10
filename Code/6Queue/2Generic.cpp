#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue
{
    public:
        struct node *First;
        int iCount;

        Queue();

        bool IsQueueEmpTY();
        void EnQueue(T no);   // InsertLast
        T DeQueue();   // DeleteFirst
        void Dispaly();
};

template <class T>
Queue<T> :: Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Queue<T> :: EnQueue(T no)       // InsertLast  
{
    struct node<T> *newn = new node<T>;

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node<T> *temp = First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
    cout<<no<<"gets EnQueued in the Queue successfully"<<"\n";
}

template <class T>
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

template <class T>
int Queue<T> :: DeQueue()   // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Queue is empty"<<"\n";
        return (T)-1;
    }
    else
    {
        T value = First -> data;
        struct node<T> *temp = First;

        First = First -> next;
        delete temp;

        iCount--;

        return value;
    }
}

template <class T>
void Queue<T> :: Dispaly()
{
    if(First == NULL)
    {
        cout<<"Queue is empty"<<"\n";
    }
    else
    {
        cout<<"Elements of Queue are : "<<"\n";

        struct node<T> *temp = First;
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
    Queue <int>obj;

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