// same as constant characteristics of class from c++
class final2
{
	public static void main(String a[])
	{
		Base bobj = new Derived();
	}
}

class Base
{
	public void fun()
	{
		System.out.println("Base fun");
	}
	public final void gun()
	{
		System.out.println("Base gun");
	}
}

class Derived extends Base
{
	public void fun()
	{
		System.out.println("Derived fun");
	}
	
	public void gun() 	// error: gun() in Derived cannot override gun() in Base
	{
		System.out.println("Derived gun");
	}
}