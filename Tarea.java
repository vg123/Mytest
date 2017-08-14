import javax.swing.*;
import java.awt.Color;

public class Tarea{
	JFrame f;
	JTextArea ar;
	Tarea(){
	  f=new JFrame();
	  ar=new JTextArea(20,20);
	  ar.setBounds(100,30,30,30);
	
	  ar.setBackground(Color.red);
	  ar.setForeground(Color.blue);

	  f.add(ar);
		
	  f.setSize(400,400);
	  f.setLayout(null);
	  f.setVisible(true);
	  }
        public static void main(String [] args){
		new Tarea();
		}
	}
