package LAB_5;

import java.util.Scanner;

class Account
{
    String name, acc_no, type;
    double bal;
    static Scanner sc=new Scanner(System.in);
        
    Account()
    {
        name=acc_no=type=" ";
        bal=0;
    }
    
    Account(String n, String a, String b, double m)
    {
        name=n; acc_no=a; type=b;
        bal=m;
    }
    
    Account(Account a)
    {
        name=a.name;  acc_no=a.acc_no;  type=a.type;
        bal=a.bal;
    }
        
    void enter()
    {
        System.out.println("Enter yout Details");
        System.out.println("Name            : ");name=sc.next();        
        System.out.println("A/C No.         : ");acc_no=sc.next();
        System.out.println("A/C Type        : ");type=sc.next();
        System.out.println("Opening Deposit : ");bal=sc.nextDouble();
    }
    
    void show()
    {
        System.out.println("Name     : " + name);
        System.out.println("A/C No.  : " + acc_no);
        System.out.println("A/C Type : " + type);
        dispBalance();
    }
    
    void deposit()
    {
        System.out.println("Enter the Deposit Ammount : ");
        bal+=sc.nextDouble();
    }
    
    void withdraw()
    {
        System.out.println("Enter the Ammount : ");
        bal-=sc.nextDouble();
    }
    
    void dispBalance()
    {
        System.out.println("Balance  : " + bal);
    }
}

class Current extends Account
{
    Current()
    {
        name=acc_no=type=" ";
        bal=0;
    }
    
    Current(Account a)
    {
        name=a.name;  acc_no=a.acc_no;  type=a.type;
        bal=a.bal;
    }
  
    @Override
    void dispBalance()
    {
        checkBal();
        System.out.println("Your Account Balance is : " + bal);
    }
    
    void checkBal()
    {
        if(bal<10000.00)
            bal-=bal*0.05;
    }
}

class Savings extends Account
{
    Savings()
    {
        name=acc_no=type=" ";
        bal=0;
    }
    
    Savings(Account a)
    {
        name=a.name;  acc_no=a.acc_no;  type=a.type;
        bal=a.bal;
    }
    
    @Override
    void dispBalance()
    {
        interest();
        System.out.println("Your Account Balance is : " + bal);
    }
  
    void interest()
    {
        bal+=bal*0.03;
    }
}

public class Account_Test 
{
    public static void main(String[] args) 
    {
        Account A = new Account();
        A.enter();
        if(A.type.equals("Current"))
        {
            Current C=new Current(A);
            A=C;
        }
        
        else if (A.type.equals("Savings"))
        {
            Savings S=new Savings(A);
            A=S;
        }
        
        A.deposit();
        A.dispBalance();
        A.withdraw();
        A.show();
    }    
}
