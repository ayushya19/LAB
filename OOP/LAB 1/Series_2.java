import java.util.Scanner;

class Series_2
{
	static Scanner sc=new Scanner(System.in);

	public static void main(String[] argc) {
		double sum=1;
		int x;

		System.out.println("Enter the Number of terms : ");
		x=sc.nextInt();

		for(int i=2; i<=x; i++)
			sum+=Math.pow((1.0/i), i);
			
		System.out.println("The Sum of Series is : " + sum);
	}
}