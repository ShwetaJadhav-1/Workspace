#include<iostream>

using namespace std;

class Demo
{
	public:
		int i, j;
		
		// Parameterised constructor with DEFAULT value
		Demo(int x = 10,int y = 20)
		{
			i = x;
			j = y;
		}
		
		void fun()
		{
			i++;	// A
			j++;	// A
		}
		
		void gun() const
		{
			i++;	// NA Error:- increment of member 'Demo::i' in read-only object
			j++;	// NA
		}
	
};

int main()
{
	Demo obj1;			// 10	20
	Demo obj2(11);		// 11	20
	Demo obj3(11,21);	// 11	21
	
	obj3.fun();
	obj3.gun();
	
	return 0;
}