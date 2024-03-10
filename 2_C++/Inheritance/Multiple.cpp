#include<iostream>

using namespace std;

class Base1		// 4 byte
{
	public:
		int A;		
		
		Base1()
		{
			cout<<"Base1 Constructor\n";
		}
		~Base1()
		{
			cout<<"Base1 Destructor\n";
		}
		void Fun()
		{
			cout<<"Base1 Fun\n";
		}
	
};
class Base2		// 12 byte
{
	public:
		int I,J,K;
	
		Base2()
		{
			cout<<"Base2 Constructor\n";
		}
		~Base2()
		{
			cout<<"Base2 Destructor\n";
		}
		void Gun()
		{
			cout<<"Base2 Gun\n";
		}
};
// Not allowed in Java
class Derived : public Base1,public Base2		// 24
{
	public:
		int X,Y;
		
		Derived()
		{
			cout<<"Derived Constructor\n";
		}
		~Derived()
		{
			cout<<"Derived Destructor\n";
		}
		void Sun()
		{
			cout<<"Derived Sun\n";
		}
	
};
int main()
{
	Derived dobj;
	
	dobj.Fun();		// Base1
	dobj.Gun();		// Base2
	dobj.Sun();		// Derived
	
	return 0;
}