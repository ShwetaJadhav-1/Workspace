#include<iostream>
using namespace std;

// Input : 7985674
// Output : Maximum times occured digit is 7

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
            int iMaxFreq= 0;
            int iMaxDigit = 0;

            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > iMaxFreq)
                {
                    iMaxFreq = Frequency[iCnt];
                    iMaxDigit = iCnt;
                }
            }
            cout<<"Maximum times occured digit is "<<iMaxDigit<<"and its frequency is : "<<iMaxFreq<<"\n";
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