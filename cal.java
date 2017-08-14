import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class cal{
	public static void main(String []args)
	{
		abc obj = new abc();
		obj.setSize(250,400);
		obj.setVisible(true);
		obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		//obj.setLayout(new FlowLayout());
		obj.setResizable(false);
		
	}
}	
class abc extends JFrame //implements ActionListener
{	
	private JTextField tf;
	private JButton one,two,three,four,five,six,seven,eight,nine,zero,add,sub,mul,div,solve;
	private String str1,st2,str3;
	private double answer=0.0;
	private JPanel contentPanel;
	public abc()
	{	
		super("Calculator");
		
		tf= new JTextField(null,20);
		tf.setEditable(false);
		
		contentPanel = new JPanel();
		contentPanel.setBackground(Color.ORANGE);
		contentPanel.setLayout(new FlowLayout());
		contentPanel.add(tf,BorderLayout.NORTH);
		this.setContentPanel(contentPanel);
		
		contentPanel.add(one);
		contentPanel.add(two);
		contentPanel.add(three);
		contentPanel.add(four);
		contentPanel.add(six);
		contentPanel.add(seven);
		contentPanel.add(eight);
		contentPanel.add(nine);
		contentPanel.add(zero);
		contentPanel.add(add);
		contentPanel.add(sub);
		contentPanel.add(mul);
		contentPanel.add(div);
		contentPanel.add(solve);
		
		
		
		//add(contentPanel);
		//tf.setFont("serif",ITALIC,14);
		one = new JButton("1");
		two = new JButton("2");
		three = new JButton("3");
		four = new JButton("4");
		five = new JButton("5");
		six = new JButton("6");
		seven = new JButton("7");
		eight = new JButton("8");
		nine= new JButton("9");
		zero = new JButton("0");
		add= new JButton("+");
		sub = new JButton("-");
		mul = new JButton("*");
		div= new JButton("/");
		solve=new JButton("Ans");
		
		Dimension dim = new Dimension(75,25);
		one.setPreferredSize(dim);
		two.setPreferredSize(dim);
		three.setPreferredSize(dim);
		four.setPreferredSize(dim);
		five.setPreferredSize(dim);
		six.setPreferredSize(dim);
		seven.setPreferredSize(dim);
		eight.setPreferredSize(dim);
		nine.setPreferredSize(dim);
		zero.setPreferredSize(new Dimension(225,25));
		add.setPreferredSize(new Dimension(115,25));
		sub.setPreferredSize(new Dimension(115,25));
		mul.setPreferredSize(new Dimension(115,25));
		div.setPreferredSize(new Dimension(115,25));
		solve.setPreferredSize(new Dimension(225,25));
	}
	/*
	public void actionPerformed(ActionEvent ae)
	{
		String x=tf.getText();
		String y;
		if(ae.getSource()==one)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==two)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==three)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==four)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==five)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==six)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==one)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==seven)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==eight)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==nine)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==zero)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==add)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==sub)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==mul)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==div)
		{
			tf.setText(x+'1');
		}
		if(ae.getSource()==solve)
		{
			tf.setText(x+'1');
		}
	}*/
}

