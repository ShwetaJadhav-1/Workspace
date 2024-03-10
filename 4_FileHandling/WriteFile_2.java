import java.io.*;

class WriteFile_2
{
    public static void main(String A[]) throws Exception
    {
        FileOutputStream fobj = new FileOutputStream("Marvellous.txt");

        String Data = "Marvellous Infosystems Pune";

        byte bdata[] = Data.getBytes(); // byte :- 1-Byte :: Char :- 2-Byte

        fobj.write(bdata);
        fobj.close();
    }
}