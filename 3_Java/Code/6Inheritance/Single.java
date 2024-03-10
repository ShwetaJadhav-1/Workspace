/*
class Object 	// Object he class che nav ahe
{
	// Code methods astata eg- clone,equals,length,destructor-Finalize
}
*/
// So the program is multi-level Inheritance(Object-Base-Derived)

import java.lang.*;	// java.lang automatic include hote

class Single
{
	public static void main(String arg[])
	{
		// Base bobj1 = new Base();		// No casting
		 // Derived dobj1 = new Derived();	// No casting
		
		Base bobj2 = new Derived();		// Upcasting
		//Derived dobj2 = new Base();		// Downcasting (NA-Error)
		
		bobj2.fun();	// Base fun
		bobj2.fun(11);	// Base fun
		bobj2.gun();	// Derived gun dobj1(jyacha object tyachi method) RunTime Method Dispatch
		//bobj2.sun();	// Derived sun 
	}
}

class Base		// class Base extends object
{
	public int A,B;
	
	public Base()
	{
		System.out.println("Base Constructor");
		this.A = 10;
		this.B = 20;
	}
	
	public void fun()	// Defination
	{
		System.out.println("Inside Base Fun");
	}
	
	public void gun()	// Defination
	{
		System.out.println("Inside Base Gun");
	}
	
	public void fun(int No)	// Overloaded Defination
	{
		System.out.println("Inside Base Fun with One Integer");
	}	
}

class Derived extends Base		// class Derived : public Base
{
	public int X,Y;
	
	public Derived()
	{
		System.out.println("Derived Constructor");
		this.X = 30;
		this.Y = 40;
	}

	public void sun()	// Defination
	{
		System.out.println("Inside Derived Sun");
	}
	
	public void gun()	// Over-rided Defination--(in C++ Redefination)
	{
		System.out.println("Inside Derived Gun");
	}
}