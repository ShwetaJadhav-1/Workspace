import java.util.*;
/*
 *      *   *   *   *
 *      *   *   *   *
 *      *   *   *   *
 *      *   *   *   *
 * 
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

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}