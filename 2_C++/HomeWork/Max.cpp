#include<iostream>

using namespace std;

class Max
{
	public:
		int no1;
		int no2;
		
		void input()
		{
			cout<<"Enter the two numbers\n";
			cin>>no1>>no2;
		}
		
		void Maximum()
		{
			if(no1 > no2)
				cout<<"Maximum number is : "<<no1;
			else if(no2 > no1)
				cout<<"Maximum number is : "<<no2;			
			else
				cout<<"Both numbers are equal\n";
		}	
};

int main()
{
	Max obj;
	obj.input();
	obj.Maximum();
	
	return 0;
}