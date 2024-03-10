#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iDigit = 0 ; iNo != 0; iNo = iNo / 10 ) // for(;;) : valid
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;        
    }

    if(iTemp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("number %d is palindrome\n",iValue);
    }
    else
    {
        printf("number %d is not palindrome\n",iValue);
    }

    return 0;
}