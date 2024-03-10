class stringDemo2
{
    public static void main(String a[])
    {
        String s1 = "Hello"; // Inside string constant pool
        String s2 = new String("Demo");// inside heap
        String s3 = "Hello"; // Inside string constant pool
        String s4 = new String("Demo"); // Inside heap
        String s5 = new String("Ganesh"); // Inside heap
        String s6 = "Marvellous"; // Inside string constant pool
    }
}

// String named class is imutable in nature in both the cases 