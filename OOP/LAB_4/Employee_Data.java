package LAB_4;

import java.util.Scanner;

class Employee
{
	private String name, city;
	private double basicSalary, totalSalary, da, hra;
	
	Employee(String n, String c, double bs, double d, double h)
	{
		name=n;
		city=c;
		basicSalary=bs;
		da=d;	hra=h;
		totalSalary=0;
	}
	
	Employee()
	{
		name=city="\0";
		basicSalary=totalSalary=da=hra=0;
	}
	
	public void getData()
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Name : ");
		name=sc.nextLine();
		System.out.print("Enter City : ");
                city=sc.nextLine();
                System.out.print("Enter Basic Salary : ");
                basicSalary=sc.nextDouble();
                System.out.print("Enter Dearness Allowance : ");
                da=sc.nextDouble();
                System.out.print("Enter House-Rent Allowance : ");
                hra=sc.nextDouble();
                
                calculate();
        }
        
        public void calculate()
        {
        	totalSalary=basicSalary*(1+da/100+hra/100);
        }
        
        public void display()
        {
        	System.out.println("Name : " + name);
        	System.out.println("City : " + city);
		System.out.println("Basic Salary : " + basicSalary);
		System.out.println("Dearness Allowance : " + da);
		System.out.println("House-Rent Allowance : " + hra);
		System.out.println("Total Salary : " + totalSalary);
	}
}

class Employee_Data
{
	public static void main(String[] argc)
	{
		Employee e=new Employee();
		e.getData();
		e.display();
	}
}

