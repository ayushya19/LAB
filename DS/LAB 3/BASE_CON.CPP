#include <iostream.h>
#include <conio.h>

class Stack
{
	int str[100];
	int top;

	public:

	Stack()
	{	top=-1;	}

	void push(int ch)
	{
		if(top==100)	cout<<"\nStack full.";
		else		str[++top]=ch;
	}

	int pop()
	{
		if(top==-1)	cout<<"\nStack Empty.";
		else 		return str[top--];
	}
};

int main()
{
	clrscr();
	Stack s;

	int n, b, c=0;
	cout<<"\nEnter the Number.";cin>>n;
	cout<<"\nEnter the Base.";cin>>b;
	while(n)
	{
		s.push(n%b);
		n/=b;
		c++;
	}

	while(c)
	{
		cout<<s.pop()<<' ';
		c--;
	}

	getch();
}



