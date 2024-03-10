#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;  // instance variable 
		int j;  // instance variable
		static int k;  // class variable : c++ 2017 ethe init allowed ahe
		static int l;  // class variable 
		
		Demo()   // Default Constructor 
		{
			i = 0; // We cant initialize static variable in Constructor
			j = 0;
		}
		Demo(int a,int b) // parameterised constructor
		{
			i = a;
			j = b;
		}
		
		// void fun(const Demo *this)
		void fun()  // instance method
		{
			// static + non static 
			cout<<"Inside non static fun\n";
			cout<<"value of i :"<<this->i<<"\n"; // value of i and j are depends on caller object
			cout<<"value of j :"<<this->j<<"\n";
			cout<<"value of k : "<<k<<"\n";
			cout<<"value of l : "<<l<<"\n";
			
		}
		
		// static void gun()
		static void gun() // class method
		{
			// only static
			cout<<"Inside static method gun\n";
			cout<<"value of k : "<<k<<"\n";
			cout<<"value of l : "<<l<<"\n";			
		}
	
};

/*k = 0; // error
int k = 0; // compiler not understand */

//Load time variables
int Demo::k = 0;    // It is not global, just a initialisation of static variable
int Demo::l = 0; 

int main()
{
	cout<<"Inside main\n";
	
	cout <<"Value of k :"<<Demo::k<<"\n";  // 0  to access--Name of class is used
	cout <<"Value of l :"<<Demo::l<<"\n"; 
	
	Demo::gun();
	
	Demo obj1(10,11);
	Demo obj2(20,21);  // Memory for k is allocated only once
	Demo obj3; // Default Constructor 
	
	cout<<"Inside main\n";
	
	cout<<"Value of i in obj1 :"<<obj1.i<<"\n";  // 10
	cout<<"Value of i in obj2 :"<<obj2.i<<"\n";  // 20
	
	cout<<"Value of j in obj1 :"<<obj1.j<<"\n";  // 11
	cout<<"Value of j in obj2 :"<<obj2.j<<"\n";  // 21
	
	obj1.fun(); //fun(&obj1);
	obj2.fun();
	
	obj1.gun();  //This is also allowed : Internally-- Demo::gun(); //
	
	cout<<sizeof(obj1); // 8
	
	return 0;
}

// Size of object is summation of sizes of its non static characteristics
// sizeof(obj) = sizeof(i) +  sizeof(j);
// sizeof(obj) = 4+4;
// sizeof(obj) = 8;