import java.io.*;

class CreateFile
{
    public static void main(String A[]) throws Exception
    {
        File fobj = new File("Marvellous.txt"); // It holds Metadata of file object

        if(fobj.createNewFile())
        {
            System.out.println("File Created successfully");
        }
        else
        {
            System.out.println("Unable to create the file");
        }
    }
}