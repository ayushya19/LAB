import java.util.Scanner;

class Prime {

	static int isPrime(int n) {
       	for(int j=2; j<n; j++)
       		if(n%j==0)
       			return 1;
       	return 0;
	}

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int s, e, flag;

        do {
        	System.out.println("Enter Lower Limit : ");
        	s=sc.nextInt();
        }while(s<1);

        do {
        	System.out.println("Enter Upper Limit : ");
        	e=sc.nextInt();
        }while(e<s);

        System.out.println(' ');
        for(int i=s; i<=e; i++) {
        	flag=isPrime(i);

        	if(flag==0)
        		System.out.print(i + " ");
        }
    }
}
