import java.util.*;

class First_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create");

        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();

        int iRet = obj.Addition();
        System.out.println("Addition of all elements is : "+iRet);
    }
}
class ArrayX
{
    public int Arr[];
    
    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
    
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter "+Arr.length+" elements "); 
        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println("Enter the element number : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public int Addition()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}
