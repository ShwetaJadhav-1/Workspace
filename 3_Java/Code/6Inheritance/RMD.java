
class RMD
{
	public static void main(String a[])
	{
		Base bobj = new Derived(); 	// Upcasting
		
		bobj.fun();		// Derived fun()
		bobj.gun();		// Derived gun()
		bobj.sun();		// Derived sun()
		// bobj.run();		// Error - Symbol not found
	}
}

class Base
{
	public void fun()	// Defination
	{
		System.out.println("Inside Base Fun");
	}
	
	public void gun()	// Defination
	{
		System.out.println("Inside Base Gun");
	}
	
	public void sun()	// Overloaded Defination
	{
		System.out.println("Inside Base sun");
	}	
}

class Derived extends Base
{
	public void fun()	// Defination
	{
		System.out.println("Inside Derived fun");
	}
	
	public void gun()	// Over-rided Defination--(in C++ Redefination)
	{
		System.out.println("Inside Derived Gun");
	}
	
	public void run()	// Over-rided Defination--(in C++ Redefination)
	{
		System.out.println("Inside Derived run");
	}
}

/*
	Base obj = new Base();		// No casting
	
	Derived obj = new Derived();// No casting
	
	Base obj = new Derived();	// Upcasting
	
	Derived obj = new Base();	// Downcasting(NA)

*/