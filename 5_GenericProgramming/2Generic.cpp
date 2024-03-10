#include<iostream>

using namespace std;

template<class T>

T Add(T i, T j)
{
    T ans;
    ans = i + j;
    return ans;
}

int main()
{
    int a = 10, b = 11, iret = 0;
    float x = 90.1f, y = 67.8f, fret = 0.0f;
    double p = 90.1, q = 67.8, dret = 0.0f;


    iret = Add(a,b);
    fret = Add(x,y);

    cout<<"Addition of integers : "<<iret<<"\n";
    cout<<"Addition of floats : "<<fret<<"\n";

    return 0;
}