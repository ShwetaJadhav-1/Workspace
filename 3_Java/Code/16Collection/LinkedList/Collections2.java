import java.util.*;

class Collections2
{
    public static void main(String arg[])
    {
        LinkedList <String>lobj = new LinkedList<String>();

        lobj.add("A");
        lobj.add("B");
        lobj.add("C");
        lobj.add("D");
        lobj.add("E");

        System.out.println("Elements of Linked list are : "+lobj);

        lobj.addFirst("AA");
        
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.addLast("Z");
        
        System.out.println("Elements of Linked list are : "+lobj);

        Iterator iobj = lobj.iterator();
        System.out.println("Data using iterator is : ");
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        if(lobj.contains("E"))
        {
            System.out.println("E is present in LL");
        }
        else
        {
            System.out.println("E is not present in LL");
        }
        
        lobj.remove();
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.remove();
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.remove(0);
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.removeLast();
        System.out.println("Elements of Linked list are : "+lobj);

        System.out.println("Number of elements are : "+lobj.size());

        lobj.set(1,"Shweta");
        System.out.println("Elements of Linked list are : "+lobj);


        lobj.clear();
        System.out.println("Elements of Linked list are : "+lobj);

    }
}