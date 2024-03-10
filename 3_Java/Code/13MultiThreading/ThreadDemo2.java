class ThreadDemo2
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");
        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);
        // genetated 2 threads
        // Now, there are total 3 threads
        t1.start(); // start internally will call the run method at the time where it scheduled
        t2.start(); // 1st schedule then run(there are some waiting time)
    }
}

class Demo implements Runnable
{
    public void run()
    {
        int i = 0;
        for(i = 1; i < 10; i++)
        {
            System.out.println(i);
        }
    }
}

//Output :-
//1
//2
//3
//1
//4
//5
//6
//7
//8
//9
//2
//3
//4
//5
//6
//7
//8
//9 