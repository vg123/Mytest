import javax.swing.JOptionPane;

class apple{
	public static void main(String args[])
	{
		String fr = JOptionPane.showInputDialog("Enter first numebr!");
		String sc = JOptionPane.showInputDialog("Enter seconf number!.");
		
		int n1= Integer.parseInt(fr);
		int n2= Integer.parseInt(sc);
		int sum=n1+n2;
		
		JOptionPane.showMessageDialog(null ,"The addition is "+sum,"Add",JOptionPane.PLAIN_MESSAGE);
	}
}	
