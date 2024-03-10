#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
	int iAns1 = 0, iAns2 =0;
	
	iAns1 = iNo % 3;
	iAns2 = iNo % 5;
	
	if((iAns1 == 0) && (iAns2 == 0))
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
	int iValue;
	bool bRet = false;
	
	printf("Enter One number : \n");
	scanf("%d",&iValue);
	
	bRet = DivisibleByThreeAndFive(iValue);
	
	
	if(bRet == true)
	{
		printf("%d is divisible by 3 and 5 \n",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 and 5 \n",iValue);
	}
	
	return 0;
}