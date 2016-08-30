#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

class Stack
{
	char stack[100];
	int top;

	public:

	Stack()
	{	top=-1;	}

	void push(char ch)
	{
		if(top==100)	cout<<"\nStack full.";
		else		stack[++top]=ch;
	}

	char pop()
	{
		if(top==-1)	cout<<"\nStack Empty.";
		else 		return stack[top--];
	}
	
	int postfixEval(char *pf, int *data)
	{
		int i=0, op1, op2, res=0;
		char ch;
		while(pf[i]!='\0')
		{
			ch=pf[i];
			if(isalpha(pf[i]))	push(data[i]);
			
		}
	}
};

void main()
{
	clrscr();
	char postfix[100];int arr[5];
	cout<<"\nEnter the Postfix Expression : ";gets(postfix);
	cout<<"\nEnter value of a, b, c, d, e : \n";
	for(int i=0; i<5; i++)
		cin>>arr[i];
	Stack s;
	s.postfixEval()
	getch();
}