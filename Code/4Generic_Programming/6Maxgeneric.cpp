#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int iSize)
{
    int iCnt;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int Data[] = {10,20,30,40};
    int ians = Maximum(Data,4);
    cout<<"Maximum of integer is : "<<ians<<"\n";

    float fData[] = {10.11f,20.22f,30.33f,40.44f};
    float fans = Maximum(fData,4);
    cout<<"Maximum of float is : "<<fans<<"\n";

    return 0;
}