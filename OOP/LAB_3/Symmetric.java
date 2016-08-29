import java.util.Scanner;

class Symmetric
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
			for(int j=i; j<n; j++)
				if (arr[i][j] != arr[j][i])
					check=false;
					
		if(check)	System.out.println("Its a Symmetric Matrix.");
		else 		System.out.println("Its a non-Symmetric Matrix.");
	}
}
