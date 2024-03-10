#include<iostream>
using namespace std;

template <class T>
// call by reference
void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 11, b = 10;

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";
    Swap(a,b);
    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";

    double j = 11.9, k = 10.7;

    cout<<"Value of j : "<<j<<"\n";
    cout<<"Value of k : "<<k<<"\n";
    Swap(j,k);
    cout<<"Value of j : "<<j<<"\n";
    cout<<"Value of k : "<<k<<"\n";

    return 0;
}