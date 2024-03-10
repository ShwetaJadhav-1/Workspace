class SuperDemo
{
	public static void main(String A[])
	{
		//Derived dobj = new Derived(11,21); //  error: constructor Base in class Base cannot be applied to given types;
		Derived dobj = new Derived(11,21,51,101); // super added in Derived
		dobj.gun();
	}
}

class Base
{
	public int A,B;
	public Base(int No1, int No2)
	{
		this.A = No1;
		this.B = No2;
	}
	
	public void fun()
	{
		System.out.println("Inside Base fun");
		System.out.println("Value of A from fun method is :"+this.A); // swatache ghya
	}
}

class Derived extends Base
{
	public int X,Y;
	public Derived(int No1, int No2, int i,int j)
	{
		super(i,j);		// 1'st usecase : Should be first statement : Base(51,101)
		this.X = No1;
		this.Y = No2;
	}
	
	public void gun()
	{
		System.out.println("Value of A from gun method is :"+super.A); // 2'nd usecase
		super.fun();	// 3'rd usecase -- Vadalanche ghya
	}
}

