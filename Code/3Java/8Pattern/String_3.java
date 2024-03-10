import java.util.*;
/*
    Row = 4
    Col = 4

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
 */
class String_2
{
    public static void main(String a[])
    {
        Task tobj = new Task();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter number of coloumns : ");
        int j = sobj.nextInt();

        tobj.Display(i,j);
    }
}

class Task
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iCnt = 1;
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(iCnt == 10)
                {
                    iCnt = 1;
                }
                System.out.print(iCnt+"\t");
                iCnt++;
                //if(iCnt > 9)
                //    iCnt = 1;
            }            
            System.out.println();
        }
    }
}