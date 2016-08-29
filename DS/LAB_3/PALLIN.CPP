#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

class Stack
{
	char str[100];
	int top;

	public:

	Stack()
	{	top=-1;	}

	void push(char ch)
	{
		if(top==100)	cout<<"\nStack full.";
		else		str[++top]=ch;
	}

	char pop()
	{
		if(top==-1)	cout<<"\nStack Empty.";
		else 		return str[top--];
	}
};

void main()
{
	clrscr();
	Stack s;
	char str[100];
	int t=1, n;
	cout<<"\nEnter the String : ";gets(str);
	int l=strlen(str);

	if(l%2)	n=l/2+1;
	else 	n=l/2;

	for(int i=n; i<l; i++)
		s.push(str[i]);

	for(i=0; i<l/2; i++)
		if(str[i] != s.pop())
			t=0;

	if(t)	cout<<"\nIts a Pallindrome.";
	else	cout<<"\nIts not a Pallindrome.";

	getch();
}
