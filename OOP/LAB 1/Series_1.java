import java.util.Scanner;

class Series_1
{
	static Scanner sc=new Scanner(System.in);

	public static void main(String[] argc) {
		double sum=0, x;
		boolean t=true;

		System.out.println("Enter the value of x : ");
		x=sc.nextDouble();

		for(int i=1; i<20; i+=2) {
			long f=1;
			for(int j=1; j<=i; j++)
				f*=j;
			if(t) {
				sum+=Math.pow(x, i)/f;
				t=false;
			}
			else {
				sum-=Math.pow(x, i)/f;
				t=true;
			}
		}

		System.out.println("The Sum of Series is : " + sum);
	}
}