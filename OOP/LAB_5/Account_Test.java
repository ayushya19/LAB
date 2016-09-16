import java.util.Scanner;

class Account
{
	String name;
	long acc_no;
	String type;
	
	Account()
	{
		name=type="\0";
		acc_no=-1;
	}
	void NewAcc()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Thank You for making a new Account with us!!!");
		System.out.println("Enter your Details");
		System.out.print("Name : ");name=sc.nextLine();
		System.out.print("Account Number : ");acc_no=sc.nextLong();
		System.out.print("Enter your Account Type : ");type=sc.nextLine();
	}
	void Display()
	{
		System.out.print("Name : " + name);
		System.out.print("Account Number : " + acc_no);
		System.out.print("Enter your Account Type : " + type);
	}
};

class Current_Account extends Account
{
	double balance;
	Current_Account()
	{
		balance=0;
	}
};

class Savings_Account extends Account
{
	double balance;
	Savings_Account()
	{
		balance=0;
	}
};

public class Account_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
