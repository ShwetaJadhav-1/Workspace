#include<iostream>

using namespace std;

class Base
{
	public:			// Access Specifier
		int A,B;
		
		
		void Fun()	// Function Defination		1000
		{
			cout<<"Base Fun\n";
		}
		void Gun(int i)	// Function Defination	2000
		{
			cout<<"Base Gun with one integer\n";
		}
		void Gun(int i, int j)	// Overloaded Function Defination	3000
		{
			cout<<"Base Gun with Two integer\n";
		}	
};

class Derived : public Base
{
		public:
			int X,Y;
			
			void Sun()		// Function Defination	4000
			{
				cout<<"Derived Sun\n";
			}
			/*void Fun()		// Function Re-defination	5000
			{
				cout<<"Derived Fun\n";
			} */	
			void Fun()		// Function Re-defination	5000
			{
				cout<<"Derived Fun\n";
			} 
};

int main()
{
	Derived dobj;
	
	//dobj.Fun();			// CALL 5000
	dobj.Base::Fun();	// CALL 1000
	dobj.Gun(11);		// CALL 2000 
	dobj.Gun(11,21);	// CALL 3000
	dobj.Sun();			// CALL 4000
	
	return 0;
}
