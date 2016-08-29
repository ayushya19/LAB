import java.util.Scanner;

class Multiply
{
	static Scanner sc=new Scanner(System.in);
	public static void main(String[] argc)
	{
		System.out.println("Array 1");
		System.out.println("Enter number of rows and columns : ");
		int r1=sc.nextInt(), c1=sc.nextInt();
		
		System.out.println("Array 2");
		System.out.println("Enter number of rows and columns : ");
		int r2=sc.nextInt(), c2=sc.nextInt();
		
		int[][] arr1=new int[r1][c1];
		int[][] arr2=new int[r2][c2];
		int[][] arr3=new int[r1][c2];
		
		if(r1!=c2)
		{
			System.out.println("Matrics can't be Multiplied.");
			return;
		}
		
		System.out.println("Enter the Elements of Array 1 : ");
		for(int i=0; i<r1; i++)
			for(int j=0; j<c1; j++)
				arr1[i][j]=sc.nextInt();
				
		System.out.println("Enter the Elements of Array 2 : ");
		for(int i=0; i<r2; i++)
		     	for(int j=0; j<c2; j++)
		                arr2[i][j]=sc.nextInt();
		                
		for(int i=0; i<r1; i++)
			for(int j=0; j<c2; j++)
			{
				int sum=0;
				for (int k=0; k<c1; k++)
					sum+=arr1[i][k]*arr2[k][j];
				arr3[i][j]=sum;
			}
		
		for(int i=0; i<r1; i++)
		{
			System.out.print("\n");
			for(int j=0; j<c2; j++)
				System.out.print(arr3[i][j] + "\t");
		}
	}
}
