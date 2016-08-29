#include <iostream.h>
#include <conio.h>

class Time
{
	int hr, min, sec;

	public:
	Time(int h=0, int m=0, int s=0)
	{
		hr=h, min=m, sec=s;
	}

	void read()
	{
		cout<<"\nEnter Hours : ";cin>>hr;
		cout<<"\nEnter Min   : ";cin>>min;
		cout<<"\nEnter Sec   : ";cin>>sec;
	}

	void display()
	{
		cout<<"\nEnter Hours : "<<hr;
		cout<<"\nEnter Min   : "<<min;
		cout<<"\nEnter Sec   : "<<sec;
	}

	void diff(Time t1, Time t2, Time &t)
	{
		long s1=60*t1.hr+60*t1.min+60+t1.sec;
		long s2=60*t2.hr+60*t2.min+60+t2.sec;
		if(s1>s2)
			t.sec=s1-s2;
		else
			t.sec=s2-s1;

		if (sec>=60)
		{
			t.min=t.sec/60;
			t.sec%=60;
		}
		if(min>=60)
		{
			t.hr=t.min/60;
			t.min%=60;
		}
	}
};

void main()
{
	clrscr();
	Time t1, t2, td;
	t1.read();
	t2.read();
	t1.diff(t1, t2, td);
	td.display();
	getch();
}