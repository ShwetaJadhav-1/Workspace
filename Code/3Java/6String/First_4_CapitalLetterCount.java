import java.util.*;


class First_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.capitalCount(str);
        System.out.println("Number of capital case letters are : "+iRet);
    }
}

class MarvellousX
{
    public int capitalCount(String s)
    {
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}