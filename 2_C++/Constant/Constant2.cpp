#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
		const int k; // constant charcteristics
		const int l;	// Dont initialise characteristic here.C++11 extension-Chalate:- Bad programming practice
		
		/*Demo()
		{
			k = 11;
			l = 21; 	// Error ;-  assignment of read-only member 'Demo::k'
		} */
		// Default constructor
		Demo() : k(11), l(21)  // Base/ Default member initialisation 
		{
			i = 51;
			j = 101;
		}
		// parameterised constructor
		Demo(int a, int b, int c, int d) : k(c), l(d)
		{
			i = a;
			j = b;
		}
};

int main()
{
	Demo obj1;
	Demo obj2(10,20,30,40);
//	obj1.k++;	// NA
//	obj2.k++;	// NA
	
	obj1.i++;	// A
	obj2.i++;	// A
	
	cout<<"i from obj1 is : "<<obj1.i<<"\n";
	cout<<"i from obj2 is : "<<obj2.i<<"\n";
	
	return 0;
}