import java.util.Scanner;

class Diagonal_Sum
{
	static Scanner sc=new Scanner(System.in);
	public static void main(String[] argc)
	{
		int n;
		System.out.print("Enter the Number of Elements : ");
		n=sc.nextInt();
		int[][] arr=new int[n][n];
		System.out.println("Enter the Elements");

		boolean check=true;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				arr[i][j]=sc.nextInt();

		for(int i=0; i<n; i++)
		{
			for(int j=0; j<i; j++)
				System.out.print("\t");
			System.out.print(arr[i][i]+"\n");
		}
		
		System.out.print("\n");
		for(int i=0; i<n; i++)
                {
                        for(int j=n-1; j>i; j--)
                                System.out.print("\t");
                        System.out.print(arr[n-i-1][i]+"\n");
		}
	}
}
