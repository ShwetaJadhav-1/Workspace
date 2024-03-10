import java.util.*;

class First_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        for(int i = 0; i < str.length(); i++)
        {
            System.out.println(str.charAt(i));
        }
    }
}