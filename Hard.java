import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JButton;
import javax.swing.JTextField;
import javax.swing.JTextArea;
import javax.swing.JLabel;
import javax.swing.JComboBox;

public class Hard extends JFrame{
	JPanel p=new JPanel();
	
	JTextField f=new JTextField("field",30);
	JButton b=new JButton("Search\n");
	//JTextArea a=new JTextArea("area\n",5,5);
	JLabel l=new JLabel("Search Engine\n");
	String choices[]={
	"Technology",
	"Politics",
	"Sports"
	};
	JComboBox box=new JComboBox(choices);
	public static void main(String []args){
		new Hard();
		}
	public Hard(){
		super("Browser\n");
		setSize(400,300);
		setResizable(true);
		b.setBounds(50,100,100,30);
		//a.setBounds(50,100,100,30);
		l.setBounds(50,150,100,30);
		p.add(f);
		p.add(b);
		//p.add(a);
		p.add(l);
		p.add(box);
		add(p);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);
		}
	}				
