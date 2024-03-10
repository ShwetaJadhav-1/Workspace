import java.util.*;


class First_4_DigitCount
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();
        
        char Arr[] = str.toCharArray();
        System.out.println(Arr.length);
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

