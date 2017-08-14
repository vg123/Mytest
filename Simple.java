import javax.swing.*;
public class Simple extends JFrame{
	JFrame f;
	Simple(){
		JButton b=new JButton("Button");
		b.setBounds(150,100,100,60);
				

		add(b);	
		setSize(400,400);
		setLayout(null);
		setVisible(true);
		}
	public static void main(String[] args){
		new Simple();
		}
	}
