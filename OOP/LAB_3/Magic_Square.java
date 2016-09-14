import java.util.Scanner;

class Magic_Square
{
	static Scanner sc=new Scanner(System.in);
	static int s;

	static int rowSum(int arr[][], int row)
	{
		int sum=0;
		for(int j=0; j<s; j++)
			sum+=arr[row][j];

		return sum;
	}

	static int colSum(int arr[][], int col)
	{
		int sum=0;
		for(int j=0; j<s; j++)
			sum+=arr[j][col];

		return sum;
	}

	static int leftDiagSum(int arr[][])
	{
		int sum=0;
		for(int j=0; j<s; j++)
			sum+=arr[j][j];

		return sum;
	}

	static int rightDiagSum(int arr[][])
	{
		int sum=0;
		for(int j=0; j<s; j++)
			sum+=arr[s-j-1][j];

		return sum;
	}

	public static void main(String[] argc)
	{		
		System.out.print("\nEnter Size : ");
		s=sc.nextInt();
		
		int[][] a=new int[s][s];
		System.out.print("\nEnter Matrix :\n");
		for(int i=0; i<s; i++)
			for(int j=0; j<s; j++)
				a[i][j]=sc.nextInt();

		int frs=0, fcs=0, lds, rds;
		int[] r=new int[s];
		int[] c=new int[s];
		for(int i=0; i<s; i++)
		{
			r[i]=rowSum(a, i);
			c[i]=colSum(a, i);
		}
		
		lds=leftDiagSum(a);
		rds=rightDiagSum(a);
		for(int i=0; i<s-1; i++)
			if(r[i]!=r[i+1])
				frs=1;
		for(int i=0; i<s-1; i++)
			if(c[i]!=c[i+1])
				fcs=1;

		if(r[0]==c[0] && r[0]==lds && r[0]==rds && frs!=1 && fcs!=1)
			System.out.print("\nIt is a Magic Square.");
		else
			System.out.print("\nIt is not a Magic Square.");
	}
}
