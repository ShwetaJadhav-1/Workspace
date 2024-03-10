import javax.swing.*;
import java.awt.event.*;

class MarvellousCalculator2
{
    public static void main(String arg[])
    {
        Calculator cobj = new Calculator(400,400,"Marvellous Calculator");
    }
}

class Calculator extends WindowAdapter
{
    public JFrame mainframe;
    public JButton b1, b2, b3, b4;
    public JTextField t1, t2;
    public JLabel lobj;
    Integer no1, no2;

    public Calculator(int width, int height, String Title)
    {
        mainframe = new JFrame(Title);
        mainframe.setSize(width,height);      

        mainframe.addWindowListener(this);

        b1 = new JButton("Add");
        b2 = new JButton("Sub");
        b3 = new JButton("Mult");
        b4 = new JButton("Div");

        t1 = new JTextField();
        t2 = new JTextField();
        
        b1.setBounds(10,280,80,40); // x,y,w,h
        b2.setBounds(100,280,80,40);
        b3.setBounds(190,280,80,40);
        b4.setBounds(280,280,80,40); 

        mainframe.add(b1);
        mainframe.add(b2);
        mainframe.add(b3);
        mainframe.add(b4);                        

        t1.setBounds(70, 150, 80, 40);
        t2.setBounds(200, 150, 80, 40);
        
        mainframe.add(t1);
        mainframe.add(t2);

        lobj = new JLabel();
        lobj.setBounds(50, 75, 200, 50);

        mainframe.add(lobj);

        mainframe.setVisible(true);
    }

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}
