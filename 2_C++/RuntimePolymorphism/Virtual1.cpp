#include<iostream>

using namespace std;

class Base
{
	public:
		int A,B;
		
		void Fun()					// 1000
		{
			cout<<"Base Fun\n";		
		}
		virtual void Gun()			// 2000
		{
			cout<<"Base Gun\n";
		}
		virtual void Sun()			// 3000
		{
			cout<<"Base Sun\n";
		}	
};

class Derived : public Base
{
	public:
		int X,Y;
		
		void Gun()					// 4000
		{
			cout<<"Derived Gun\n";
		}
		void Run()					// 5000
		{
			cout<<"Derived Run\n";
		}
		virtual void mun()			// 6000
		{
			cout<<"Derived Mun\n";
		}	
};

int main()
{
	cout<<"Size of Base class : "<<sizeof(Base)<<"\n";			// 8 bytes after virtual 16 bytes
	cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";	// 16 bytes after virtual 24 bytes
	
	Base *bp = NULL;
	
	Derived dobj;
	bp = &dobj;		// Allowed : Upcasting
	
	bp -> Fun();	// CALL 1000
	bp -> Gun();	// CALL 2000
	bp -> Sun();	// CALL 3000
	
	return 0;
}