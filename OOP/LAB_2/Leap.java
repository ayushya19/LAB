import java.util.Scanner;

class Leap
{
	static Scanner sc=new Scanner(System.in);

	public static void main(String[] argc)
	{
		int y;
		System.out.print("Enter the Year : ");		y=sc.nextInt();
		boolean r=false;

		r=((y%4==0 && y%100!=0) || y%400==0) ? true: false;

		if(r)	System.out.println("Its a Leap Year.");
		else	System.out.println("Its not a Leap Year.");
	}
}