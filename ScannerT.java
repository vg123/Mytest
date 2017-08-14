import java.util.Scanner;
public class ScannerT{
	public static void main(String args[]){
		String input= "this is 10 number";
		Scanner s=new Scanner(input).useDelimiter("\\s");
		System.out.println(s.next());
		System.out.println(s.next());
		System.out.println(s.nextInt());
		s.close();
		}
	}	
		
