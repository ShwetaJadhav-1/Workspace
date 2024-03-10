import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
// example of CheckedException
class BufferedInput
{
    public static void main(String A[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in); // nal
        BufferedReader bobj = new BufferedReader(iobj);     // Badali
        String name = null;
        int iAge = 0;
        float fMarks = 0.0f;
        
        try
        {
            System.out.println("Enter your name : ");
            name = bobj.readLine();      // IOException withou using try

            System.out.println("Enter your age : ");
            iAge = Integer.parseInt(bobj.readLine());

            System.out.println("Enter your marks : ");
            fMarks = Float.parseFloat(bobj.readLine());
        }
        catch (IOException obj)
        {}

        System.out.println("Name: "+name);
        System.out.println("Age: "+iAge);
        System.out.println("Marks: "+fMarks);
    }
}