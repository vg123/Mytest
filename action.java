import java.awt.*;
import java.awt.event.*;

class second extends Frame implements ActionListener{
	TextField tf;
	second(){
		tf=new TextField();
		tf.setBounds(30,50,100,40);
		
		Button b=new Button("ok!");
		b.setBounds(100,120,50,20);
		
		b.addActionListener(this);
		
		add(b);add(tf);
		
		setSize(400,300);
		setLayout(null);
		setVisible(true);
		
		}
		public void actionPerformed(ActionEvent e){
			tf.setText("yess you did it");
			}
		public static void main(String args[]){
			second sc=new second();
			}
		}			
