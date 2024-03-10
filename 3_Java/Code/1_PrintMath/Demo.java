class Demo
{
	public static void main(String argv[])
	{
		System.out.println("Inside main function");
		
		Maths mobj1 = new Maths();
		Maths mobj2 = new Maths(11,21);
		
		int iRet = 0;
		iRet = mobj1.Addition();
		System.out.println("Addition is : "+iRet);
		
		iRet = mobj2.Substraction();
		System.out.println("Substraction is : "+iRet);
		
		
	}
}

class Maths
{
	public int iNo1;	// characteristics
	public int iNo2;	// characteristics
	
	public Maths()		// Default constructor
	{
		System.out.println("Inside default constructor");
		iNo1 = 0;
		iNo2 = 0;
	}
	public Maths(int a, int b)	// parameterised constructor
	{
		System.out.println("Inside parameterised constructor");
		iNo1 = a;
		iNo2 = b;
	}
	public int Addition()	// Behaviour
	{
		int iAns = 0;
		iAns = iNo1 + iNo2;
		return iAns;
	}
	public int Substraction()	// Behaviour
	{
		int iAns = 0;
		iAns = iNo1 - iNo2;
		return iAns;
	}
}		// End of Maths class

