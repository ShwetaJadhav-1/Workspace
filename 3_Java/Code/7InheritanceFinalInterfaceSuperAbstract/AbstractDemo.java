// abstract class is a class which contains 0 or more abstarct methods in it
// abstract lihlyane object nahi create kru shakat
// abstract class lihali aani 0 abstract method - object nahi create kru shakt
// Marvellus la compulsory ahe--tya abstract class la concrete krne nahitr Marvellous la abstract kra kinva empty body dya

class AbstractDemo
{
	public static void main(String Arr[])
	{
		//Arithmatic aobj = new Arithmatic(); // NA
		//Arithmatic aobj = new Marvellous(); // A rule no.-9 it is referenve now
		Marvellous mobj = new Marvellous(); // error: Arithmatic is abstract; cannot be instantiated
		int Ret = 0;
		Ret = mobj.Addition(10,11);
		System.out.println("Addition is :"+Ret);
		Ret = mobj.Substraction(11,10);
		System.out.println("Substraction is : "+Ret);		
	}
}

abstract class Arithmatic
{
	public int Addition(int No1,int No2)
	{
		return No1 + No2;
	}
	
	public abstract int Substraction(int No1,int No2); // yamule error
	// virtual int Substraction(int No1,int No2) = 0;
}

class Marvellous extends Arithmatic // if keep empty : error: Marvellous is not abstract and does not override abstract method Substraction(int,int) in Arithmatic
{
	public int Substraction(int No1,int No2)
	{
		return No1 - No2;
	}
}