class address{
	String state,country,city;
	address(String state,String country,String city){
		this.state=state;
		this.country=country;
		this.city=city;
		}
	}
class mn{
	int data;
	String name;
	address add;
	
	mn(String name,int data,address add){
		this.name=name;
		this.data=data;
		this.add=add;
		}
	void display(){System.out.println("\nname="+name+" \nnum="+data+"\naddress="+add.city+" "+add.state+" "+add.country);}
		
	public static void main(String args[]){
		address a1=new address("mp","india","sheopur");
		mn n=new mn("vishal",123,a1);
		n.display();
		}
	}					
