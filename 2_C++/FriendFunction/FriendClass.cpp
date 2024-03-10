#include<iostream>

using namespace std;

class Marvellous		// Size of Marvellous is 1 byte.
{
	public:
		void fun();		// Member Function
		void gun();		// Member Function
};

class Demo
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;
		
	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}	
		
	friend class Marvellous;
};

void Marvellous::fun()		// Member Function
{
	Demo obj;	
	cout <<"Value of i : "<<obj.i<<"\n";
	cout <<"Value of j : "<<obj.j<<"\n";
	cout <<"Value of k : "<<obj.k<<"\n";
}

void Marvellous::gun()		// Member Function
{
	Demo obj;	
	cout <<"Value of i : "<<obj.i<<"\n";
	cout <<"Value of j : "<<obj.j<<"\n";
	cout <<"Value of k : "<<obj.k<<"\n";
}


int main()
{
	Marvellous mobj;
	
	mobj.fun();
	mobj.gun();
	
	return 0;
}