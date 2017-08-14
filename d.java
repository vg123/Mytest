class Sq{
	int data;
	String name;
	
	
	void s1(Sq x){
		System.out.println("this is me");
		}
	void s2(String name ){
		s1(this);
		this.name=name;
		}
	void s3(){
		s2("name");
		}
	public static void main(String args[]){	
			Sq s=new Sq();
			s.s3();
			}
		}	
