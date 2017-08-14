class TestF{
	private int data=9;
	 TestF(int v,String str){
		System.out.println(v+" "+str);
		data=v;
		}
	class Inner{
	   void msg(){ 
		System.out.println("data="+data);
		}
           String msg(int i){
           	return "yes";
           	}			 
	   }
	   
	public static void main(String args[]){
		TestF obj1=new TestF(5,"vishal");
		TestF.Inner inobj=obj1.new Inner();
		inobj.msg();
		System.out.printf("the return of %s",inobj.msg(1));
		}
	}		
