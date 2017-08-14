public class second{
	private String gfname;
	public second(String name){
		gfname=name;
		}
	public void methodOne(String name){
		System.out.println("this is method one and parameter is "+name);
		gfname=name;
		}
	public String method(){
		return gfname;
		}	
	public void output(){
	         System.out.printf("this is your gf name %s\n",method());
		}
	}		
