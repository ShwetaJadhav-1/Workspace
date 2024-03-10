import java.util.*;

class Three_ArrayPalindrome_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);   // 2 .class file create honar

        obj.Accept();
        obj.Display();

        Boolean bRet = obj.CheckPalindrome();
        if(bRet == true)
        {
            System.out.println("Array is palindrome");
        }
        else
        {
            System.out.println("Array is not palindrome");
        }
    }
}
class ArrayX
{
    protected int Arr[];
    
    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
    
    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter "+Arr.length+" elements "); 
        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println("Enter the element number : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
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

    public boolean CheckPalindrome() // Array element reverse nahi karayacha// same memory use karayachi
    {
        int iStart = 0;
        int iEnd = Arr.length - 1;
        int iTemp = 0;
        boolean bFlag = true;

        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                bFlag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
    }
}
