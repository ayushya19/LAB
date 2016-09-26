package LAB_6;

import java.util.Scanner;

abstract class Area
{
    abstract void enter();
    abstract double area();
}

class Rectangle extends Area
{
    int l, b;
    Rectangle()
    {
        l=b=0;
    }
    Rectangle(int a, int c)
    {
        l=b; b=c;
    }
    Rectangle(Rectangle r)
    {
        l=r.l;  b=r.b;
    }
    
    @Override
    void enter()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Length and Breadth of the Rectangle");
        l=sc.nextInt();
        b=sc.nextInt();
    }
    
    @Override
    double area()
    {
        return l*b;
    }
}

class Circle extends Area
{
    int r;
    Circle()
    {
        r=0;
    }
    Circle(int c)
    {
        r=c;
    }
    Circle(Circle c)
    {
        r=c.r;
    }
    
    @Override
    void enter()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Radius of the Circle");
        r=sc.nextInt();
    }
    
    @Override
    double area()
    {
        return 3.14 * Math.pow(r, 2);
    }
}

public class Area_Test_Abs 
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
