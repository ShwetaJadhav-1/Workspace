#include<iostream>

using namespace std;

class Math
{
	public:
		int no1;
		int no2;
		
		int Max(int A, int B)
		{
			no1 = A;
			no2 = B;
			
			if(no1 > no2)
				return no1;
			else if(no2 > no1)
				return no2;			
			else
				return 0;
		}	
};

int main()
{
	Math obj;
	int A,B,C = 0;
	
	cout<<"Enter two numbers\n";
	cin>>A>>B;
	
	C = obj.Max(A,B);
	
	if(C != 0)
		cout<<"Max Number is : "<<C;
	else
		cout<<"Both numbers are equal";
	
	
	
	
	return 0;
}