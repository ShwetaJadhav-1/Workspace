#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * Arr; // or int Arr[];
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];   // Arr = (int *)malloc(iSize * sizeof(int));
        }
        ~ArrayX()
        {
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
    ArrayX obj(5);  // Static :- memory at compile time
    // hardcoded :- 5 number given in program

    obj.Accept();
    obj.Display();

    return 0;
}