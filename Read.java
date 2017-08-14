import java.io.*;
class Read{
	public static void main(String args[]){
		Console c=System.console();
		System.out.println("Enter your name");
		String name=c.readLine();
		System.out.println("Welcome " +name);
		System.out.println("Enter your password");
		char[] ch=c.readPassword();
		String pass=String.valueOf(ch);
		System.out.println("password is:"+pass);
		}
	}	
