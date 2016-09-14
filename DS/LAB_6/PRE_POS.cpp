# include <iostream>
# include <string.h>
# include <stdio.h>
# define SIZE 100

using namespace std;

class STACK
{
	int top;
	char Stack[25][SIZE];

	public:
	STACK()
	{
		top=-1;
	}

	void push(char *sym)
	{
		if(top==24)
			cout<<"\nStack is full.";

		else
		{
			top++;
			strcpy(Stack[top],sym);
		}
	}

	char* pop( )
	{
		char sym[SIZE];

		if(top==-1)
			cout<<"\nStack is empty.";

		else
		{
			strcpy(sym,Stack[top]);
			top--;
		}

		return sym;
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

	void prefix_to_infix(char *prefix)
	{
		char infix[SIZE];
		char val1[SIZE], val2[SIZE], res[SIZE];
		char sym[5];

		reverse(prefix);
		strcat(prefix,"=");

		int count=0;
		do
		{
			sym[0]=prefix[count];

			if(	sym[0]=='/' || sym[0]=='*' || sym[0]=='%' || sym[0]=='-' || sym[0]=='+' )
			{
				strcpy(val2, pop());
				strcpy(val1, pop());

				if(infix[(count+1)]!='=')
					strcpy(res,"(");

				strcat(res,val2);
				strcat(res,val1);
				strcat(res,sym);

				if(infix[(count+1)]!='=')
					strcat(res,")");

				push(res);
			}

			else
			push(sym);

			count++;
		}
		while(prefix[count]!='=');

		strcpy(infix,pop( ));

		cout<<"\n Postfix Expression is : "<<infix<<'\n';
	}
};

int main( )
{
	STACK s;
	char prefix[SIZE];

	cout<<"\n Enter the Prefix Expression : ";gets(prefix);
	s.prefix_to_infix(prefix);

	return 0;
}
