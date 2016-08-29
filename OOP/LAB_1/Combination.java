import java.util.Scanner;

class Combination
{
	static void duplicAllow()
	{
		for(int i=1; i<=4; i++) 
			for(int j=1; j<=4; j++) 
				for(int k=1; k<=4; k++)
					for(int l=1; l<=4; l++) {
						System.out.println(" ");
						System.out.print(i);
						System.out.print(j);
						System.out.print(k);
						System.out.print(l);
					}
	}

	static void duplicNotAllow()
	{
		for(int i=1; i<=4; i++)
			for(int j=1; j<=4; j++) 
				for(int k=1; k<=4; k++) 
					for(int l=1; l<=4; l++)
						if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l) {
							System.out.println(" ");
							System.out.print(i);
							System.out.print(j);
							System.out.print(k);
							System.out.print(l);
						}
	}

	public static void main(String[] argc) {
		Scanner sc = new Scanner(System.in);
		int opt;

		System.out.println("\t\tPrint Combinations of Numbers 1, 2, 3, 4");
		System.out.println("\n1. Duplication of Digits is Allowed.");
		System.out.println("\n2. Duplication of Digits is Not-Allowed.");
		opt=sc.nextInt();

		switch(opt)
		{
			case 1 :duplicAllow();
					break;
			case 2 :duplicNotAllow();
					break;
		}
	}
}