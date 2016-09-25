package LAB_4;

import java.util.Scanner;

class Time 
{
	private int hr, min, sec;
	
	Time()
	{
		hr=min=sec=0;
	}
	
	void input()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Time in hr, min, sec : ");
		hr=sc.nextInt();
		min=sc.nextInt();
		sec=sc.nextInt();
	}
	
	void display()
	{
		System.out.println("Time is : "+hr+":"+min+":"+sec);
	}
	
	Time add(Time t1, Time t2)
	{
		Time t3=new Time();
		t3.hr=t1.hr+t2.hr;
		t3.min=t1.min+t2.min;
		t3.sec=t1.sec+t2.sec;
		if(t3.sec>=60)
		{
			t3.min+=t3.sec/60;
			t3.sec%=60;
		}
		if(t3.min>=60)
		{
			t3.hr+=t3.min/60;
			t3.min%=60;
		}
		return t3;
	}
};

public class Time_Test
{
	public static void main(String[] argc)
	{
		Time t1=new Time(), t2=new Time(), t3=new Time();
		t1.input();t2.input();
		t3=t3.add(t1, t2);
		t3.display();
	}
}