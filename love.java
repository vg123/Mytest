import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import javax.swing.event.*;
import javax.swing.border.*;
import java.util.*;
class  love1  extends JFrame implements ActionListener
{
String s[]={"back","close"};
//Jpanel jp;
JLabel l1,l2,l3,l4;
JButton b1,b2;
love1(int per)
{
super("Love Calculator");
setLayout(null);
Font F1=new Font("Lucida Calligraphy",Font.BOLD,40);
Font F2=new Font("Lucida Calligraphy",Font.BOLD,20);
Font F3=new Font("Lucida Calligraphy",Font.BOLD,40);
 l1=new JLabel("Love Calculator");
l1.setBounds(400,30,400,50);
l1.setFont(F1);
add(l1);
if(per>60&&per<=70)
{l2=new JLabel(new ImageIcon("60.jpg"));
l2.setBounds(300,110,400,400);
add(l2);}
else if(per>70&&per<=80)
{l2=new JLabel(new ImageIcon("70.jpg"));
l2.setBounds(300,110,400,400);
add(l2);}
else if(per>80&&per<=90)
{l2=new JLabel(new ImageIcon("80.jpg"));
l2.setBounds(300,110,400,400);
add(l2);}
else if(per>90&&per<=100)
{l2=new JLabel(new ImageIcon("90.jpg"));
l2.setBounds(300,110,400,400);
add(l2);
}
else 
{
l2=new JLabel(new ImageIcon("50.jpg"));
l2.setBounds(300,120,400,400);
add(l2);
}

l4=new JLabel(per+" %", JLabel.CENTER);
l4.setForeground(Color.white);
l4.setBounds(450,570,150,100);
l4.setFont(F3);
add(l4);
b1=new JButton(s[0]);
b1.setBounds(30,620,100,30);
b1.setFont(F2);
add(b1);
b1.addActionListener(this);
b2=new JButton(s[1]);
b2.setBounds(850,620,100,30);
b2.setFont(F2);
add(b2);
b2.addActionListener(this);
b2.addActionListener(new ActionListener()
{
public void actionPerformed(ActionEvent a)
{
  System.exit(0);
}
});

l3=new JLabel("");
ImageIcon i=new ImageIcon("images.jpeg");
l3.setIcon(i);
l3.setSize(1024,700);
add(l3);

setVisible(true);
setSize(1024,700);
setDefaultCloseOperation(EXIT_ON_CLOSE);
}
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==b1)
{
love l =new love();
this.setVisible(false);
l.setVisible(true);
}
}
}
class love  extends JFrame implements ActionListener,FocusListener
{
	String nm []={"Calculate","Close"};
	JTextField t1,t2;
	JLabel l1,l2,l3;
	JButton b1,b2;
	love()
	{
		super("Love Calculator");
		setLayout(null);	
		Font F1=new Font("Lucida Calligraphy",Font.ITALIC,40);
		Font F2=new Font("Lucida Calligraphy",Font.ITALIC,20);
		
		l1=new JLabel("Love Calculator");
		l1.setBounds(400,30,400,50);
		l1.setFont(F1);
		add(l1);
		t1=new JTextField("BOY");
		t1.setBounds(450,270,200,30);
		t1.setFont(F2);
		t1.addFocusListener(this);
		add(t1);

		t2=new JTextField("GIRL");
		t2.setBounds(470,330,200,30);
		t2.setFont(F2);
		t2.addFocusListener(this);
		add(t2);

		b1=new JButton(nm[0]);
		b1.setBounds(300,600,200,35);
		b1.setFont(F2);
		add(b1);
		b1.addActionListener(this);
 
		b2=new JButton(nm[1]);
		b2.setBounds(550,600,200,35);
		b2.setFont(F2);
		add(b2);
		b2.addActionListener(this);
		
		b2.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent ae)
			{
				System.exit(0);
			}
		});

		l3=new JLabel("");
		ImageIcon i=new ImageIcon("love.jpg");
		l3.setIcon(i);
		l3.setSize(1024,700);
		add(l3);
		setVisible(true);
		setSize(1024,700);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

	public void focusGained(FocusEvent fe)
	{
		if(fe.getSource()==t1)
		t1.setBackground(Color.RED);
		else if(fe.getSource()==t2)
		t2.setBackground(Color.RED);
	}
	public void focusLost(FocusEvent fe)
	{
		if(fe.getSource()==t1)
		t1.setBackground(Color.WHITE);
		else if(fe.getSource()==t2)
		t2.setBackground(Color.WHITE);
	}

	public void actionPerformed(ActionEvent ae)
	{
		String s1,s2,nm1,nm2;
		nm1=t1.getText();
		nm2=t2.getText();
		s1=nm1;s2=nm2;
		Font F1=new Font("Lucida Calligraphy",Font.BOLD,30);
		int percentage,sum1=0,sum2=0;
		if(ae.getSource()==b1)
		{
			l2=new JLabel("Analysing. . . .");
			l2.setBounds(500,650,200,30);
			l2.setFont(F1);
			add(l2);
			try
			{
				Thread.sleep(3000);
			}
			catch(InterruptedException ex)
			{
				Thread.currentThread().interrupt();
			}	
			for(int i=0;i<s1.length();i++)
			{
				char ch=s1.charAt(i);
				int ascii=ch;
				sum1=sum1+ascii;
			}
			for(int i=0;i<s2.length();i++)
			{
				char ch=s2.charAt(i);
				int ascii=ch;
				sum2=sum2+ascii;
			}
			int total=sum1+sum2;
			percentage=total%100;
			if(percentage>60&&percentage<=70)
			{
				love1 luv=new love1(percentage);
				this.setVisible(false);
				luv.setVisible(true);
			}
			else if(percentage>70&&percentage<=80)
			{
				love1 luv=new love1(percentage);
				this.setVisible(false);
				luv.setVisible(true);
			}
			else if(percentage>80&&percentage<=90)
			{
				love1 luv=new love1(percentage);
				this.setVisible(false);
				luv.setVisible(true);
			}
			else if(percentage>90&&percentage<=100)
			{
				love1 luv=new love1(percentage);
				this.setVisible(false);
				luv.setVisible(true);
			}
			else
			{
				percentage+=40;
				love1 luv=new love1(percentage);
				this.setVisible(false);
				luv.setVisible(true);
			}
		}
	}
	public static void main(String args [])
	{
		love luv1=new love();
	}
}
