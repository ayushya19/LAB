package LAB_5;

import java.util.Scanner;

class Student
{
    String reg_no, name;
    int age;
    static Scanner sc=new Scanner(System.in);
    
    Student()
    {
        reg_no=name="";
        age=0;
    }
    
    Student(String r, String n, int a)
    {
        reg_no=r;  name=n;  age=a;
    }
    
    Student(Student s)
    {
        reg_no=s.reg_no;  name=s.name;  age=age;
    }
    
    void enter()
    {
        System.out.println("Name     : ");name=sc.nextLine();
        System.out.println("Reg. No. : ");reg_no=sc.nextLine();
        System.out.println("Age      : ");age=sc.nextInt();        
    }
    
    void show()
    {
        System.out.println("Name     : " + name);
        System.out.println("Reg. No. : " + reg_no);
        System.out.println("Age      : " + age);        
    }
}

class UG extends Student
{
    int sem;
    double fee;
    
    UG()
    {
        super();
        sem=0;  fee=0;
    }
    
    UG(String r, String n, int a, int s, double f)
    {
        super(r, n, a);
        sem=s;  fee=f;
    }
    
    UG(UG u)
    {
        super(u.reg_no, u.name, u.age);
        sem=u.sem;  fee=u.fee;
    }
    
    @Override
    void enter()
    {
        super.enter();
        System.out.println("Semester : ");sem=sc.nextInt();
        System.out.println("Fee      : ");fee=sc.nextDouble();
    }
    
    @Override
    void show()
    {
        super.show();
        System.out.println("Semester : " + sem);
        System.out.println("Fee      : " + fee);
    }
    
    void editSem()
    {
        System.out.println("Enter Semester : ");sem=sc.nextInt();
    }
    
    void editFee()
    {
        System.out.println("Enter Fee : ");fee=sc.nextDouble();
    }
}

class PG extends Student
{
    int sem;
    double fee;
    
    PG()
    {
        super();
        sem=0;  fee=0;
    }
    
    PG(String r, String n, int a, int s, double f)
    {
        super(r, n, a);
        sem=s;  fee=f;
    }
    
    PG(UG u)
    {
        super(u.reg_no, u.name, u.age);
        sem=u.sem;  fee=u.fee;
    }
    
    @Override
    void enter()
    {
        super.enter();
        System.out.println("Semester : ");sem=sc.nextInt();
        System.out.println("Fee      : ");fee=sc.nextDouble();
    }
    
    @Override
    void show()
    {
        super.show();
        System.out.println("Semester : " + sem);
        System.out.println("Fee      : " + fee);
    }
    
    void editSem()
    {
        System.out.println("Enter Semester : ");sem=sc.nextInt();
    }
    
    void editFee()
    {
        System.out.println("Enter Fee : ");fee=sc.nextDouble();
    }
}

class Student_Test
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your Choice.");
        System.out.println("1. UG Student");
        System.out.println("2. PG Student");
        int opt=sc.nextInt();
        switch(opt)
        {
            case 1: UG u=new UG();
                    u.enter();
                    u.show();
                    u.editFee();
                    u.editSem();
                    u.show();
                    break;

            case 2: PG p=new PG();
                    p.enter();
                    p.show();
                    p.editFee();
                    p.editSem();
                    p.show();        
                    break;
        }
    }
}
