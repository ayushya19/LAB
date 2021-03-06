# include <iostream.h>
# include <string.h>
# include <stdlib.h>
# include <conio.h>

class Stack
{
	int top;
	char Stack[25][SIZE];

	public:
	Stack()
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
		char sym[SIZE]={NULL};

		if(top==-1)
			cout<<"\nStack is empty.";

		else
		{
			strcpy(sym,Stack[top]);
			strset(Stack[top],NULL);
			top--;
		}

		return sym;
	}

	void postfix_to_infix(char *postfix)
	{
		char infix[SIZE]={NULL};
		char val1[SIZE]={NULL}, val2[SIZE]={NULL}, res[SIZE]={NULL};
		char sym[5]={NULL};

		strcat(postfix,"=");

		int count=0;
		do
		{
			sym[0]=postfix[count];

			if(	sym[0]=='/' || sym[0]=='*' || sym[0]=='%' || sym[0]=='-' || sym[0]=='+' )
			{
				strcpy(val1, pop());
				strcpy(val2, pop());

				if(infix[(count+1)]!='=')
					strcpy(res,"(");

				strcat(res,val2);
				strcat(res,sym);
				strcat(res,val1);

				if(infix[(count+1)]!='=')
					strcat(res,")");

				push(res);
			}

			else
			push(sym);

			count++;
		}
		while(postfix[count]!='=');

		strset(infix,NULL);
		strcpy(infix,pop( ));

		cout<<"\n\n\t Infix Expression is : "<<infix;
	}
};
void main( )
{
	clrscr( );
	Stack s;

	char postfix[SIZE];

	cout<<"\n\n\t Enter the Postfix Expression : ";	gets(postfix);
	s.postfix_to_infix(postfix);

	getch( );
}