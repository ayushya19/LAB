#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

using namespace std;

class postfix
{
	int stack[MAX], *value;
	int top, res;
	char *s;
	
	public :
		
	postfix()
	{
		top=res=-1;
	}

	void setexpr (char *str, int *v)
	{
		s = str;
		value=v;
	}

	void push (int item)
	{
		if (top == MAX - 1)
			cout <<"\nStack is full";
		else
			stack[++top] = item;
	}

	int pop()
	{
		if (top == -1)
		{
			cout <<"\nStack is empty";
			return NULL;
		}
		return stack[top--];
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

	void calculate()
	{
		int n1, n2, n3;
		reverse(s);
		while (*s)
		{
			if (*s == ' '  ||  *s == '\t')
			{
				s++;
				continue;
			}
			if (isalpha(*s))
				push(value[*s - 97]);
				
			else
			{
				n2 = pop();
				n1 = pop();
				switch (*s)
				{
					case '+' :	n3 = n2 + n1;
								break;
					case '-' :	n3 = n2 - n1;
								break;
					case '/' :	n3 = n2 / n1;
								break;
					case '*' :	n3 = n2 * n1;
								break;
					case '%' :	n3 = n2 % n1;
								break;
				}
	 
				push (n3);
			}
			s++;
		}
	}
	void show()
	{
		res = pop ();
		cout <<"\nResult is: "<<res<<'\n';
	}
};
 
int main()
{
	char expr[MAX];
	int val[26]={NULL};
	cout << "\nEnter prefix expression to be evaluated : ";
	gets(expr);
	for(int i=0; i<strlen(expr); i++)
	{
		if(isalpha(expr[i]))
			if (val[expr[i]-97]==NULL)
			{
				cout<<"Enter value of "<<expr[i]<<" : ";
				cin>>val[expr[i]-97];
			}
	}
	postfix q;
	q.setexpr (expr, val);
	q.calculate();
	q.show();
	return 0;
}
