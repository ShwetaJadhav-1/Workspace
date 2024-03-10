#include<stdio.h>
#include<stdbool.h>

int CheckPerfectR(int No)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfectR(No);
    }
    if(iSum == No)
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
    int Value = 0;
    bool bRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&Value);

    bRet = CheckPerfectR(Value);    

    if(bRet == true)
    {
        printf("The given number %d is perfect number\n",Value);
    }
    else
    {
        printf("The given number %d is not a perfect number\n",Value);
    }
    

    return 0;
}
