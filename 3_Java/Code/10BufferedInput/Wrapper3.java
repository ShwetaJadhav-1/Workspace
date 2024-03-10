import java.io.*;

class Wrapper3
{
    public static void main(String A[])
    {
        int no = 11;

        Integer iobj = new Integer(no);     // Boxing - Converting premitive to wrapper

        System.out.println(no);
        System.out.println(iobj);

        int x = iobj;       // Unboxing - Converting wrapper to primitive
        System.out.println(x);
    }
}