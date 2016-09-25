package LAB_4;

import java.util.Scanner;

class Complex
{
	private double r, im;
	
	Complex()
	{
		r=im=0;
	}
	
	void input()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Complex No:");
		System.out.print("Real: ");r=sc.nextDouble();
		System.out.print("Imaginary: ");im=sc.nextDouble();		
	}
	
	void display()
	{
		System.out.println("Complex No is : "+r+" + "+im+"i");
	}
	
	Complex Sum(int a, Complex b)
	{
		Complex c=new Complex();
		c.r=a+b.r;
		c.im=b.im;
		return c;
	}
	Complex Sum(Complex a, Complex b)
	{
		Complex c=new Complex();
		c.r=a.r+b.r;
		c.im=a.im+b.im;
		return c;
	}	
};

public class Complex_Test {

	public static void main(String[] args) 
	{
		Complex a=new Complex(), b=new Complex(), c=new Complex();
		a.input();b.input();
		c=c.Sum(10, b);
		c.display();
		c=c.Sum(a, b);
		c.display();
	}
}
