class StaticDemo
{
	static	// .class file memory madhe load hotiye
	{
		System.out.println("Inside static block of StaticDemo class which contains main");
	}
	
	public StaticDemo() // JVM main call krtana obj create krt nahi
	{
		System.out.println("Inside constructor of StatocDemo");
	}
	
	static public void main(String arr[])
	{
		System.out.println("Inside main");
		
		System.out.println("Value of static No3 : "+Demo.No3); // in C++:- Demo :: No3
		System.out.println("Value of static No4 : "+Demo.No4); // in C++:- Demo :: No4
		Demo.gun(); //  in C++:- Demo :: gun()
		
		Demo obj1 = new Demo(); 
		Demo obj2 = new Demo();
		
		obj1.Fun();
	}
}

class Demo
{
	public int No1;			// non-static characteristics
	public int No2;			// non-static characteristics
	public static int No3;	// static characteristics
	public static int No4;	// static characteristics
	
	public Demo()				// constructor
	{
		System.out.println("Inside Constructor");
		No1 = 11;
		No2 = 21;
	}
	
	static					// static block
	{
		System.out.println("Inside static block from demo class");
		No3 = 51;
		No4 = 101;
	}
	
	public void Fun()		// non static method
	{
		System.out.println("Inside non-static method fun");
		
		// Non static method can access static as well as non static data
		// we can use this keyword
		System.out.println("Value of non-static No1 : "+this.No1);
		System.out.println("Value of non-static No2 : "+this.No2);
		System.out.println("Value of static No3 : "+this.No3);
		System.out.println("Value of static No4 : "+this.No4);
	}
	
	public static void gun()	// static method
	{
		System.out.println("Inside static method gun");
		
		// static method  can access only static data
		// we can not use this keyword
		// System.out.println("Value of non-static No1 : "+No1);
		// System.out.println("Value of non-static No2 : "+No2);
		System.out.println("Value of static No3 : "+No3);
		System.out.println("Value of static No4 : "+No4);
	}
}