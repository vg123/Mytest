import javax.swing.*;  
import java.awt.*;

public class frame extends JFrame{  
	JTextArea area,areaurl;
	frame()
	{	  
		area = new JTextArea("Search Query ...");
		areaurl = new JTextArea("EnterURL ...");
		areaurl.setBounds(20,100,150,30);
		area.setBounds(20,30,150,30);
		area.setBackground(Color.white);
		area.setForeground(Color.blue);
		area.setBackground(Color.black);
		area.setForeground(Color.red);
		add(area);
		add(areaurl);
    		JButton b=new JButton("click");
    		b.setBounds(200,30,80,30);          
    		add(b);
    		JButton b1=new JButton("click");
    		b1.setBounds(200,100,80,30);          
    		add(b1);
    		setSize(400,500);
    		setLayout(null);
    		setVisible(true);
    		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	} 
    	public static void main(String[] args) {  
        	new frame();
    	}  
 }  
