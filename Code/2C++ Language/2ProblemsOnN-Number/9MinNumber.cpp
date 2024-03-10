#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * Arr; 
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocationg the memory for resources..."<<"\n";
            iSize = i;
            Arr = new int[iSize];   
        }
        ~ArrayX()
        {
            cout<<"Deallocationg the memory of resources..."<<"\n";
            delete []Arr;   
        }
        void Accept()       
        {
            cout<<"Enter the elements of array : "<<"\n";
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];  
            }
        }
        void Display()      
        {
            cout<<"Elements of array are : "<<"\n";
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";   
            }
            cout<<"\n";
        }
        int Minimum()
        {
            int iMin = Arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Entet the size of array : "<<"\n";
    cin>>iLength;

    ArrayX * obj = new ArrayX(iLength);  

    obj->Accept();
    obj->Display();

    iRet = obj->Minimum();
    cout<<"Smallest element is : "<<iRet<<"\n";

    delete obj; 
    
    return 0;
}