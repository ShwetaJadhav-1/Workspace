import java.io.*;

class ReadFile_3
{
    public static void main(String A[]) throws Exception
    {
        FileInputStream fobj = new FileInputStream("Marvellous.txt");
        int i = 0;

        while((i = fobj.read()) != -1)
        {
            //System.out.println((char)i);
            System.out.print((char)i);
        }
        System.out.println();
        fobj.close();

    }
}

// https://docs.oracle.com/javase/7/docs/api/java/io/File.html#File(java.lang.String)