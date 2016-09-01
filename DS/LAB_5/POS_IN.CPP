# include <iostream.h>
# include <string.h>
# include <stdlib.h>
# include <conio.h>

class Stack
{
	int top;
	char Stack[25][100];

	public:
	Stack()
	{
		top=-1;
	}

	void push(char *sym)
	{
		if(top==24)
			cout<<"Error : Stack is full."<<endl;

		else
		{
			top++;
			strcpy(Stack[top],sym);
		}
	}

	char* pop( )
	{
		char sym[100]={NULL};

		if(top==-1)
			cout<<"Error : Stack is empty."<<endl;

		else
		{
			strcpy(sym,Stack[top]);
			strset(Stack[top],NULL);
			top--;
		}

		return sym;
	}

	void postfix_to_infix(char *Postfix)
	{
		char infix[100]={NULL};
		char postfix[100]={NULL};

		strcpy(postfix,Postfix);
		strcat(postfix,"=");

		int count=0;

		char sym[5]={NULL};

		do
		{
			sym[0]=postfix[count];

		if(	sym[0]=='/' || sym[0]=='*' || sym[0]=='-' || sym[0]=='+' ||	sym[0]=='^' )
		{
			char val1[100]={NULL};
			char val2[100]={NULL};
			char res[100]={NULL};

			strcpy(val1,pop( ));
			strcpy(val2,pop( ));

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

	char postfix;

	cout<<"\n\n\t Enter the Postfix Expression : ";	gets(postfix);
	s.postfix_to_infix(postfix);

	getch( );
}