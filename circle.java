class square{
	int sq(int r){
		return r*r;
		}
	}
class mn{
	square ss=new square();
	double pi=3.14;
	double area(int r){
		int srad=ss.sq(r);
		return pi*srad;
		}
	public static void main(String args[]){
		mn n=new mn();
		System.out.println("area od circle="+n.area(5));
		}
}	
