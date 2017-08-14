import java.util.Scanner;
public class first{
	public static void main(String args[]){
		Scanner scan=new Scanner(System.in);
		String str=scan.nextLine();
		second sc=new second("gupta");
		second sc1=new second("vishal");
		sc.methodOne(str);
		sc1.output();
		sc.output();
		}
	}	
