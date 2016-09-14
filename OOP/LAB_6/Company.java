import java.util.Scanner;

interface HCL{
	public void input();
	public void print();
}

class Hardware implements HCL{ 
	String c, m;
	Hardware(){
		c=m="\0";
	}

	public void input(){
		Scanner s=new Scanner(System.in);
		System.out.println("Enter Category:");
		String c=s.next();
		System.out.println("Enter Manufacture:");
		String m=s.next();
	}
	
	public void print(){
		System.out.println("Enter Category:" + c);
		System.out.println("Enter Manufacture:" + m);
	}
}

class Software implements HCL{
	String t, o;
	Software(){
		t=o="\0";
	}
	
	public void input(){
		Scanner s=new Scanner(System.in);
		System.out.println("Enter Type:");
		String t=s.next();
		System.out.println("Enter OS:");
		String o=s.next();
	}
	
	public void print(){
		System.out.println("Enter Type:" + t);
		System.out.println("Enter OS:" + o);
	}
}

class Company{
	public static void main(String arg[]){
		Scanner sc=new Scanner(System.in);
		Hardware h=new Hardware();
		Software s=new Software();
		int a=3,ch=0,cs=0;
		while((a==1)||(a==2)||(a==3)){
			System.out.println("1.Hardware \n2.Software");
			a=sc.nextInt();
			if(a==1)
			{
				h.input();
				h.print();
				ch++;
			}							 
			else if(a==2)
			{
				s.input();
				s.print();
				cs++;
			}
		}
		System.out.println("Sales for: Hardware:" +ch +"Software:" +cs);
	}
}
