import java.util.Scanner;

class Max_Min
{
	static Scanner sc=new Scanner(System.in);

	public static void main(String[] argc)
	{
		int a, b, c;
		System.out.print("Enter the 1 Number : ");	a=sc.nextInt();
		System.out.print("Enter the 2 Number : ");	b=sc.nextInt();
		System.out.print("Enter the 3 Number : ");	c=sc.nextInt();

		int m=(a>b) ? (a>c) ? a : c : b;
		System.out.println("The Maximum number is : " + m);

		m=(a<b) ? (a<c) ? a : b : c;
		System.out.println("The Minimum number is : " + m);
	}
}