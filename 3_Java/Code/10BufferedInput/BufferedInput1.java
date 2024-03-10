import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
// example of CheckedException
class BufferedInput
{
    public static void main(String A[])
    {
        InputStreamReader iobj = new InputStreamReader(System.in); // taki
        BufferedReader bobj = new BufferedReader(iobj);     // badali

        // BufferReader bobj = new BufferedReader (new InputStreamReader (System.in));

        // System.in = taki (Keyboard)
        // InputStreamReader = pipe
        // BufferedReader = Badali : Size = JVM dependant

        String name = null;
        int iAge = 0;
        float fMarks = 0.0f;        
       
        System.out.println("Enter your name : ");
        name = bobj.readLine();      // IOException withou using try
        // readline - input compulsory string input dete

        System.out.println("Enter your age : ");
        iAge = Integer.parseInt(bobj.readLine());
        // Integer = wrapper class
        // parseInt = static method

        System.out.println("Enter your marks : ");
        fMarks = Float.parseFloat(bobj.readLine());

        System.out.println("Name: "+name);
        System.out.println("Age: "+iAge);
        System.out.println("Marks: "+fMarks);
    }
}