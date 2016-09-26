package LAB_6;

import java.util.Scanner;

interface Area1
{
    void enter();
    double area();
}

class Rectangle1 implements Area1
{
    int l, b;
    Rectangle1()
    {
        l=b=0;
    }
    Rectangle1(int a, int c)
    {
        l=b; b=c;
    }
    Rectangle1(Rectangle r)
    {
        l=r.l;  b=r.b;
    }
    
    @Override
    public void enter()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Length and Breadth of the Rectangle");
        l=sc.nextInt();
        b=sc.nextInt();
    }
    
    @Override
    public double area()
    {
        return l*b;
    }
}

class Circle1 implements Area1
{
    int r;
    Circle1()
    {
        r=0;
    }
    Circle1(int c)
    {
        r=c;
    }
    Circle1(Circle c)
    {
        r=c.r;
    }
    
    @Override
    public void enter()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Radius of the Circle");
        r=sc.nextInt();
    }
    
    @Override
    public double area()
    {
        return 3.14 * Math.pow(r, 2);
    }
}

public class Area_Test_Int 
{
    public static void main(String[] args) 
    {
        Rectangle r=new Rectangle();
        r.enter();
        System.out.println("Area of the Rectangle is : " + r.area());
        
        Circle c=new Circle();
        c.enter();
        System.out.println("Area of the Circle is : " + c.area());
    }
}
