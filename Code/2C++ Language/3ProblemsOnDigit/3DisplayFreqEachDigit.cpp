#include<iostream>
using namespace std;

// Input : 7985674
// Output :     4 occurs 1 Times
//              5 occurs 1 Times
//              6 occurs 1 Times
//              7 occurs 2 Times
//              8 occurs 1 Times
//              9 occurs 1 Times
class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }
        void DisplayFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};    // All variables are init to 0

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;

                Frequency[iDigit]++;    // 10 Counters na ekatra krnara array

                iTemp = iTemp / 10;
            }

            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > 0)
                {
                    cout<<iCnt<<" occurs at "<<Frequency[iCnt]<<" times "<<"\n";
                }
            }
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();


    return 0;
}