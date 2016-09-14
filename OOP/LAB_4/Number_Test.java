import java.util.Scanner;

class Number
{
	private  double d;
	
	Number()
	{
		d=0;
	}
	
	void input()
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the Number : ");d=sc.nextDouble();
	}
	
	boolean isZero()
	{
		if(d==0)return true;
		else	return false;
	}
	
	boolean isPositive()
	{
		if(d>0)	return true;
		else	return false;
	}
	
	boolean isNegative()
	{
		if(d<0)	return true;
		else	return false;
	}
	
	boolean isOdd()
	{
		int m=(int)d;
		if(m%2==1)	return true;
		else	return false;
	}
	
	boolean isEven()
	{
		int m=(int)d;
		if(m%2==0)	return true;
		else	return false;
	}
	boolean isPrime()
	{
		int m=(int)d;
		boolean b=true;
		for(int i=2; i<m/2; i++)
			if(m%i==0)
				return true;
		
		return false;
	}
	boolean isArmstrong()
	{
		int sum=0, m=(int)d, m1=m;
		while(m1>0)
		{
			sum+=Math.pow(m1%10, 3);
			m1/=10;
		}
		if(sum==m)	return true;
		else		return false;
	}
}

public class Number_Test {

	public static void main(String[] args) 
	{
		Number n=new Number();
		n.input();
		
		if(n.isZero())	System.out.println("Number is Zero");
		else			System.out.println("Number is Non-Zero");
		
		if(n.isPositive())	System.out.println("Number is Positive");
		else			System.out.println("Number is Non-Positive");
		
		if(n.isNegative())	System.out.println("Number is Negative");
		else			System.out.println("Number is Non-Negative");
		
		if(n.isOdd())	System.out.println("Number is Odd");
		else			System.out.println("Number is Non-Odd");
		
		if(n.isEven())	System.out.println("Number is Even");
		else			System.out.println("Number is Non-Even");
		
		if(n.isPrime())	System.out.println("Number is Prime");
		else			System.out.println("Number is Non-Prime");
		
		if(n.isArmstrong())	System.out.println("Number is Armstrong");
		else			System.out.println("Number is Non-Armstrong");
	}
}