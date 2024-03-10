
class final3
{
	public static void main(String a[])
	{
		Base bobj = new Derived();
	}
}

final class Base 	// final class
{
	
}

class Derived extends Base // error: cannot inherit from final Base
{
	
}