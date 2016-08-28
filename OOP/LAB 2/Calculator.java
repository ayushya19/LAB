import java.util.Scanner;

class Calculator
{
	static Scanner sc=new Scanner(System.in);

	public static void main(String[] argc)
	{
		float a, b; double r; char c, opt;

		do
		{
			System.out.println("Enter the Arthemetic Expression");
			a=sc.nextFloat();
			c=sc.next().charAt(0);
			b=sc.nextFloat();

			switch(c)
			{
				case '+' : 	System.out.println(a + " + " + b + " = " + (a+b));
							break;
				case '-' : 	System.out.println(a + " - " + b + " = " + (a-b));
							break;
				case '*' : 	System.out.println(a + " * " + b + " = " + (a*b));
							break;
				case '/' : 	System.out.println(a + " / " + b + " = " + (a/b));
							break;
			}

			System.out.print("Do you want to Perform another Operation [Y/N] : ");	opt=sc.next().charAt(0);
		}while(opt=='Y' || opt=='y');
	}
}