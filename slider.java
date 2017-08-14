import javax.swing.*;

public class slider extends JFrame{
	slider(){
		JSlider slid=new JSlider(JSlider.HORIZONTAL,0,50,50);
		JPanel panel=new JPanel();
		panel.add(slid);
		
		add(panel);
		}
	public static void main(String args[]){
		slider s=new slider();
		s.pack();
		s.setVisible(true);
		}
	}	
