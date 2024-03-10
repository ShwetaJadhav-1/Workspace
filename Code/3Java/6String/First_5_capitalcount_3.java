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
        char Arr[] = s.toCharArray();

        for(int i = 0; i < s.length(); i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}