#include<iostream>

using namespace std;

class Base  // 8 bytes
{
	public:
		int A,B;
		
		void Fun()					// 1000
		{
			cout<<"Base Fun\n";		
		}
		virtual void Gun()			// 2000  ethala virtual kadhala tr khali redination
		{
			cout<<"Base Gun\n";
		}
		virtual void Sun()			// 3000
		{
			cout<<"Base Sun\n";
		}
		virtual void Run()			// 4000
		{
			cout<<"Base run\n";
		}
};

class Derived : public Base  // 16 bytes
{
	public:
		int X,Y;
		
		void Gun()					// 5000  
		{
			cout<<"Derived Gun\n";
		}
		virtual void Run()					// 6000
		{
			cout<<"Derived Run\n";
		}
		virtual void Mun()			// 7000  yacha use yacchya derived la hoil
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
	
	bp = &dobj;		// upcasting
	
	bp -> Fun();	// Base cha Fun -- no ise of virtual
	bp -> Gun();	// Derived cha Gun -- Overriding
	bp -> Sun();	// Base cha Sun  -- half virtual 
	bp -> Run();	// Derived cha Run -- Overriding
//	bp -> Mun();	// Error:- 'class Base' has no member named 'Mun';
	
	return 0;
}