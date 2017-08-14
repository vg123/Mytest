import javax.swing.*;
public class Mytable{
	JFrame jf;
	Mytable(){
		jf=new JFrame();
		
		String data[][]={{"1","vishal","1312"},{"3","gupta","42"}};
		String column[]={"id","name","salary"};
		
		JTable jt=new JTable(data,column);
		jt.setBounds(30,40,200,300);
		
		JScrollPane scroll=new JScrollPane(jt);
		jf.add(scroll);
		
		jf.setSize(300,400);
		jf.setVisible(true);
		}
		public static void main(String args[]){
			new Mytable();
			}
		}	
