import java.util.Scanner;

class Pattern
{
	public static void main(String[] argc) {
		Scanner sc = new Scanner(System.in);
		int n, z=1;;
		System.out.println("Enter Number : ");
		n=sc.nextInt();

		for(int i=1; i<=n ; i++) {
			System.out.println(" ");
			for(int j=1; j<=i; j++)
				System.out.print(z++ + "\t");
		}
	}
}