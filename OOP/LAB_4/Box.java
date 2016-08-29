import java.util.Scanner;

class Box
{
	private double width, height, depth;
	
	Box(double w, double h, double d)
	{
		width=w;
		height=h;
		depth=d;
	}
	Box()
	{
		width=height=depth=0;
	}	
	
	public double volume()
	{
		return width*height*depth;
	}
}

class Box_Implement
{
	public static void main(String[] argc)
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the Width : ");
		double width=sc.nextDouble();
		System.out.print("Enter the Height : ");
		double height=sc.nextDouble();
		System.out.print("Enter the Depth : ");
		double depth=sc.nextDouble();

		Box b1=new Box(width, height, depth);
		System.out.println("The Volume of the Box is : " + b1.volume());
	}
}
