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
};

class marvellousLB : public ArrayX
{
    public:

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
}; // jyachya bussiness logic ahe to function.. mhanje object ya class cha create karava lagnar
// constructor arrayX cha call karava lagnar....
// tyasathi Base Member Initialisation
int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Entet the size of array : "<<"\n";
    cin>>iLength;
 
    
    return 0;
}