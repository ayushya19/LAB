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
	
	int preced(char ch)
	{
		if(ch=='/' || ch=='*' || ch=='%')	return 5;
		else if(ch=='+' || ch=='-')	return 4;
		else	return 3;
	}
	
	void inToPost(char *infix, char *postfix)
	{
		int length=strlen(infix), index=0, pos=0;
		char symbol, temp;
		push('#');
		while(index<length)
		{
			symbol=infix[index];
			switch(symbol)
			{
				case '('	:	push(symbol); break;
				case ')'	:	temp=pop();
										while(temp!='(')
										{
											postfix[pos++]=temp;
											temp=pop();
										}break;
				case '+'	:
				case '-'	:
				case '*'	:
				case '/' 	:
				case '%'	:	while(preced(stack[top])>preced(symbol))
										{
											temp=pop();
											postfix[pos++]=temp;
										}
										push(symbol);	break;
				default		:	postfix[pos++]=symbol;
										break;
			}
			index++;
		}
		while(top>0)
		{
			temp=pop();
			postfix[pos++]=temp;
		}
		postfix[pos++]='\0';
	}
};

void main()
{
	clrscr();
	char infix[100], postfix[100];
	cout<<"\nEnter the Infix Expression : ";gets(infix);
	Stack s;
	s.inToPost(infix, postfix);
	cout<<"\nThe Postfix Expression is : "<<postfix;
	getch();
}
