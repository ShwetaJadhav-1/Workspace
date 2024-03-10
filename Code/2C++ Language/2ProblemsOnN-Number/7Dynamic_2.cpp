#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * Arr; // or int Arr[];
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocationg the memory for resources..."<<"\n";
            iSize = i;
            Arr = new int[iSize];   // Arr = (int *)malloc(iSize * sizeof(int));
        }
        ~ArrayX()
        {
            cout<<"Deallocationg the memory of resources..."<<"\n";
            delete []Arr;   // free(Arr);
        }
        void Accept()       // getter method
        {
            cout<<"Enter the elements of array : "<<"\n";
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];   // scanf("%d",&Arr[i]);
            }
        }
        void Display()      // setter method
        {
            cout<<"Elements of array are : "<<"\n";
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";   // printf("%d",Arr[iCnt]);
            }
            cout<<"\n";
        }
};

int main()
{
    int iLength = 0;

    cout<<"Entet the size of array : "<<"\n";
    cin>>iLength;

    ArrayX * obj = new ArrayX(iLength);  // Dynamic : 
    // Destructor call nahi zala
    // Pointer local ahe : allocate zaleli memory dynamic ahe

    obj->Accept();
    obj->Display();

    return 0;
}