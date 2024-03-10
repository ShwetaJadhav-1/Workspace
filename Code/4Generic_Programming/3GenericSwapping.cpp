#include<iostream>
using namespace std;

// call by reference
void Swapi(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void Swapd(double &x, double &y)
{
    double temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 11, b = 10;

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";
    Swapi(a,b);
    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";

    double j = 11.9, k = 10.7;

    cout<<"Value of j : "<<j<<"\n";
    cout<<"Value of k : "<<k<<"\n";
    Swapd(j,k);
    cout<<"Value of j : "<<j<<"\n";
    cout<<"Value of k : "<<k<<"\n";

    return 0;
}