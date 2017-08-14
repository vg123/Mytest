import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JButton;
import javax.swing.JTextField;
import javax.swing.JTextArea;

 class Hard extends JFrame{
	JPanel p=new JPanel();
	JButton b=new JButton("button");
	JTextField f=new JTextField("field",30);
	JTextArea a=new JTextArea("area",5,5);
	
	public static void main(String []args){
		new hard();
		}
	public Hard(){
		super("hye it's super\n");
		setSize(400,300);
		setResizable(true);
		
		p.add(b);
		p.add(f);
		p.add(a);
		add(p);
		setVisible(true);
		}
	}				
