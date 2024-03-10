#include<iostream>

using namespace std;

class Base
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	public:
		Base()
		{
			i = 10;
			j = 20;
			k = 30;			
		}	
};

class Derived : public Base
{
	public:
		void Fun()
		{
			cout<<"Value of public i of Base : "<<i<<"\n";		// Allowed
			//cout<<"Value of private j of Base : "<<j<<"\n";		// Not Allowed
			cout<<"Value of protected k of Base : "<<k<<"\n";	// Allowed
		}
	
};

int main()
{
	Derived dobj;
	
	dobj.Fun();	
	
	return 0;
}