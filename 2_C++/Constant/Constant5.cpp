#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		const int j;	// constant charcateristic
		
		// Parameterised constructor with DEFAULT value
		Demo(int x = 10,int y = 20) : j(y)
		{
			i = x;
			j = y;
		}
		
		void fun()
		{
			int a = 10;
			const int b = 20;	// constant variable
			i++;	// A (7)
			j++;	// NA because of 9 no.
			a++;	// A (20)
			b++;	// NA (21)
		}
		
		void gun() const	// constant behaviour
		{
			int a = 10;
			const int b = 20;
			i++;	// NA (28)	
			j++;	// NA (28)	
			a++;	// A (30)
			b++;	// NA (31)
		}
	
};

int main()
{
	Demo obj1(11,21);			
	const Demo obj2(11,21);		// constant object
	
	obj1.fun();	// A
	obj1.gun(); // A
	
	obj2.fun(); // NA Constant object can call only constant function
	obj2.gun(); // A
	
	obj1.i++;	// A
	obj1.j++;	// NA
	
	obj2.i++;	// NA 
	obj2.j++;	// NA
	
	return 0;
}