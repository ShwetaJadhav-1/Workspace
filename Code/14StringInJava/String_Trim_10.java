import java.util.*;

class String_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        String data = str.replaceAll("\\s+", " "); // Regex used

        String newstr = data.trim();

        String Arr[] = newstr.split(" ");

        System.out.println("Number of words are : "+Arr.length);
        
    }

}