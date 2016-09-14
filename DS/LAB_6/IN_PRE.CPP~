#include <iostream>
#include <stdio.h>
#include <string.h>
#define MAX 100

using namespace std;

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
		else			stack[++top]=ch;
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

	void reverse(char *str)
	{
		int l=strlen(str);
	    for(int i=0; i<l/2; i++)
	    {
	    	char ch=str[i];
	    	str[i]=str[l-i-1];
	    	str[l-i-1]=ch;
	    }
	}
	void inToPre(char *infix, char *prefix)
	{
		int length=strlen(infix), index=0, pos=0;
		reverse(infix);
		char symbol, temp;
		push('#');
		while(index<length)
		{
			symbol=infix[index];
			switch(symbol)
			{
				case ')':	push(symbol); break;
				case '(':	temp=pop();
							while(temp!=')')
							{
								prefix[pos++]=temp;
								temp=pop();
							}break;

				case '+':
				case '-':
				case '*':
				case '/':
				case '%':	while(preced(stack[top])>preced(symbol))
							{
								temp=pop();
								prefix[pos++]=temp;
							}
							push(symbol);	break;

				default	:	prefix[pos++]=symbol;
			}
			index++;
		}
		while(top>0)
		{
			temp=pop();
			prefix[pos++]=temp;
		}
		prefix[pos++]='\0';
		reverse(prefix);
	}
};

int main()
{
	char infix[MAX], prefix[MAX];
	cout<<"\nEnter the Infix Expression : ";gets(infix);
	Stack s;
	s.inToPre(infix, prefix);
	cout<<"\nThe Prefix Expression is : "<<prefix<<'\n';
}
