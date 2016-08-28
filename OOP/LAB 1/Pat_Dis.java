import java.util.Scanner;

class Pat_Dis
{
	public static void main(String[] argc) {
		Scanner sc = new Scanner(System.in);
		int n;
		System.out.println("Enter Number of lines : ");
		n=sc.nextInt();

		for(int i=1; i<=n; i++)
		{
			System.out.println(" ");
			for(int j=1; j<=i; j++)
				System.out.print(i);
		}
	}
}