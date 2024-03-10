import java.lang.*;		// Default package in Java

class Overloading
{
	public static void main(String a[])
	{
		Demo obj = new Demo();
		
		obj.fun();
		obj.fun(11);
		obj.fun(11,21);
		obj.fun(12.12);
	}
	
}

class Demo
{
	public void fun()	// fun@0
	{
		System.out.println("Fun Without Paramter");
	}
	
	public void fun(int i)	// fun@1i
	{
		System.out.println("Fun With one integer as a Paramter");
	}
	
	public void fun(int i, int j)	// fun@2ii
	{
		System.out.println("Fun With teo integer as a Paramter");
	}
	
	public void fun(double d)	// fun@1d
	{
		System.out.println("Fun With one double as a Paramter");
	}
}