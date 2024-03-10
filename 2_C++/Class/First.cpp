#include<iostream>

using namespace std;
// Maths :- kay karaych ahe?
class Maths
{
	public:      	// Access Specifier
		int iNo1;	// Characteristics  kay lagnar ahe?
		int iNo2;	// Characteristics  kay lagnar ahe?
		
	Maths()			// Constructor (default) 
	{
		cout <<"Inside Default Constructor\n";
		iNo1 = 0;
		iNo2 = 0;
	}
	Maths(int A,int B) // Constructor (parameterised)
	{
		cout <<"Inside parameterised Constructor\n";
		iNo1 = A;
		iNo2 = B;
	}
	
	~Maths()
	{
		cout<<"Inside Destructor\n";
		//Destructor
	}
	
	//int Addition(Maths *this)
	int Addition()		// Behaviour
	{
		return iNo1 + iNo2;
	}
	
	// int Substraction(Maths *this)
	int Substraction()	// Behaviour
	{
		return iNo1 - iNo2;
	}
};

int main()
{
	cout <<"Inside main function\n";
	
	Maths mobj1;
	Maths mobj2(11,10);
	int ret = 0;
	
	ret = mobj2.Addition();  // ret = Addition(&mobj2)
	// ret = Addition(200) - Check notebook
	cout<<"Addition is : "<<ret<<"\n";
	
	ret = mobj1.Addition();  // ret = Addition(&mobj1)
	// ret = Addition(100)
	cout<<"Addition is : "<<ret<<"\n";
	
	ret = mobj1.Substraction();  // ret = substraction(&mobj1)
	// ret = substractiontion(100)
	cout<<"Substraction is : "<<ret<<"\n";
	
	return 0;
}