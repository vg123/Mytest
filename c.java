class c{
	static{int a=99,b=1;System.out.println("sum="+(a+b));}
 	  int data=0;
	static int counter=0;
	 
	 String name=null,city;
	 c(){counter++;System.out.println("empty"+counter);}
	 c(String name,int data){
	 	this();
		counter++;
		System.out.println("count="+counter);
		
	    	this.name=name;
		this.data=data;
		}
	 c(String name,int data,String city){
	 	
		this(name,data);
		
		this.city=city;
		}
	void cease(String name,int data){
		this.name=name;
		this.data=data;
		}	
	void display(){
	 System.out.println(" "+name+" "+city+" "+ data);
	 }
	 static void display1(){System.out.println(" counter="+counter);
	 }
	public static void main(String []args){
		new c().cease("m",3);
		display1();
		c c1=new c("vishal",123);
		c c2=new c("vinshu",123,"karahal");
		c1.display();
		c2.display();
		}
	}	 		
