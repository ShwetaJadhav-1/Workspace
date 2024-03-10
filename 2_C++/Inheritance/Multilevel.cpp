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

class DerivedX : public Derived
{
	public:
		int i,j;
		
		DerivedX()
		{
			cout<<"Inside DerivedX Constructor\n";
		}
		~DerivedX()
		{
			cout<<"Inside DerivedX Destructor\n";
		}
		void Sun()
		{
			cout<<"Inside DerivedX Sun\n";
		}
	
};

int main()
{
	cout<<"Size of Base :"<<sizeof(Base)<<"\n";			// 8
	cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";	// 16
	cout<<"Size of DerivedX :"<<sizeof(DerivedX)<<"\n";	// 24
	
	DerivedX dobj;  // Static memory allocation
	
	dobj.Fun();
	dobj.Gun();
	dobj.Sun();
	
	return 0;
}