import java.util.*;

class UserDefined5
{
    public static void main(String a[])
    {
        Scanner sobj  = new Scanner(System.in);
        System.out.println("Enter your age : ");
        int iAge = sobj.nextInt();

        try
        {
            if(iAge < 15)
            {
                AgeInvalidException aobj = new AgeInvalidException("Your age is less than 15 : ");
                throw aboj; // split syntax

                //throw new AgeInvalidException("Your age is less than 15 : "); Inline syntax
            }
            else 
            {
                System.out.println("Age is valid");
            }
        }
        catch(AgeInvalidException obj)
        {
            System.out.println(obj);
        }
    }
}

class AgeInvalidException extends Exception
{
    AgeInvalidException(String str)
    {
        super(str);
    }
}

