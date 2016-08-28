import java.util.Scanner;

class Multi_Div_Bit
{
	static Scanner sc=new Scanner(System.in);

	public static void main(String[] argc)
	{
		int a;

		System.out.print("Enter the Number : ");	a=sc.nextInt();

		System.out.println("Multiply by 2 : " + a<<1);
		System.out.println("Divide by 2 : " + a>>1);
	}
}
