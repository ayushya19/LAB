import java.util.Scanner;

class Type_Conv
{
	static Scanner sc=new Scanner(System.in);

	public static void main(String[] argc)
	{
		int a;   char b;   double c;
		System.out.print("Enter the Integer Number : ");	a=sc.nextInt();
		System.out.print("Enter the Char : ");	b=sc.next().charAt(0);
		System.out.print("Enter the Double Number : ");	c=sc.nextDouble();

		System.out.println("Int -> Byte 	 : " + (byte)a);
		System.out.println("Char -> Int 	 : " + (int)b);
		System.out.println("Double -> Byte : " + (byte)c);
		System.out.println("Double -> Int  : " + (int)c);
	}
}