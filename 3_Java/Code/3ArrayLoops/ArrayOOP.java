import java.util.Scanner;

class ArrayOOP
{
	public static void main(String argv[])
	{
		ArrayX obj1 = new ArrayX[5];
		obj1.Accept();
		obj1.Display();
		
		int iRet = obj1.Addition();
		System.out.println("Addition is : "+iRet);
	}
}

class ArrayX		// object chi size 12 ch irrespective of size of array
{
	public int Arr[];
	public int iSize;
	
	public ArrayX(int No)
	{
		this.iSize = No;
		this.Arr = new int[iSize];	// Constructor used here to allocate the resource
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the elements : ");
		for(int iCnt = 0; iCnt < iSize; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Elements of array are : ");
		for(int iCnt = 0; iCnt < iSize; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
	
	public int Addition()
	{
		int iSum = 0;
		for(int iCnt = 0; iCnt < iSize; iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
		return iSum;
	}
}