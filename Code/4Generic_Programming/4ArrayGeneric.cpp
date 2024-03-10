#include<iostream>
using namespace std;

template <class T>

void Display(T Arr[], int iSize)
{
    int iCnt;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}

int main()
{
    int Data[] = {10,20,30,40};
    Display(Data,4);

    cout<<"\n";

    float fData[] = {10.11,20.22,30.33,40.44};
    Display(fData,4);

    cout<<"\n";

    char cData[] = {'a','b','d','e','w'};
    Display(cData,5);

    return 0;
}