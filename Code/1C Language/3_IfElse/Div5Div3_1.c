#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
	if((iNo%3 == 0) && (iNo%5 == 0))
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