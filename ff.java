import javax.swing.*;
import java.awt.Image; 
import javax.swing.ImageIcon;
class jf {
	
		public static void main(String [] args)
		{
			JFrame f= new JFrame();
			f.setSize(800,600);
			f.setVisible(true);
			f.setTitle("WIndow");
			f.setDefaultCloseOperation(3);
			ImageIcon ic = new ImageIcon("star.png");
			Image logo  = ic.getImage();
			f.setIconImage(logo);
			f.setResizable(false);
			
			Dimension dim = Toolkit.getDefaultToolkit.getScreenSize();
			int w = f.getSize().width;
			int h = f.getSize().height();
			int x = (dim.width - w)/2;
			int y =(dim.height - h)/2;
			
			f.setLocation(x,y);
			
		}
	}	
