#include<iostream>

using namespace std;

class Base
{
	//	int X;	// private is default access specifier in C
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
		void Fun()
		{
			cout<<"Value of public i from Fun:"<<i<<"\n";	// Allowed
			cout<<"Value of private j from Fun :"<<j<<"\n";	// Allowed
			cout<<"Value of protected k from Fun "<<k<<"\n";	// Allowed			
		}	
};

/*class Derived : public Base
{
	
	
}; */
int main()
{
	Base bobj;
	cout<<"value of public i : "<<bobj.i<<"\n";		// Allowed
//	cout<<"value of private j : "<<bobj.j<<"\n";		// Not Allowed
//	cout<<"value of protected k : "<<bobj.k<<"\n";	// Not Allowed
	
	bobj.Fun();
	
	
	return 0;
}