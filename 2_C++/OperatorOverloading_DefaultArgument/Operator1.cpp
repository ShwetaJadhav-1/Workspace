#include<iostream>

using namespace std;

class Demo
{	
	public:
		int A,B;
		
		Demo(int i = 0, int j = 0)
		{
			A = i;
			B = j;
		}
};

int main()
{
	Demo A(10,20);
	Demo B(30,40);
	Demo Ans(0,0);
	
	Ans = A + B;	// Error:- SDK cha error- operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs
	
	return 0;
}