#include<iostream>

using namespace std;

class Base
{
		public:
			int A,B;
			
			Base()
			{
				cout<<"Inside Base Constructor\n";
			}
			~Base()
			{
				cout<<"Inside Base Destructor\n";
			}
			void Fun()
			{
				cout<<"Inside Base Fun\n";
			}
	
};

class Derived : public Base
{
		public:
			int X,Y;
			
			Derived()
			{
				cout<<"Inside Derived constructor\n";
			}
			~Derived()
			{
				cout<<"Inside Derived destructor\n";
			}
			void Gun()
			{
				cout<<"inside gun of Derived\n";
			}
	
};


int main()
{
	Derived * ptr = NULL;
	
	ptr = new Derived; // Object size 16 = Parent + Child
	
	ptr -> Fun();
	ptr -> Gun();
	
	delete ptr;
	
	return 0;
}