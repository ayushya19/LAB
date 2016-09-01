#include <iostream.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define MAX 50

class postfix
{
	int stack[MAX] ;
	int top, nn ;
	char *s ;
	
	public :
		
	postfix( )
	{
		top = -1 ;
	}
	void setexpr ( char *str )
	{
		s = str ;
	}
	void push ( int item )
	{
		if ( top == MAX - 1 )
			cout << endl << "Stack is full" ;
		else
		{
			top++ ;
			stack[top] = item ;
		}
	}
	int pop( )
	{
		if ( top == -1 )
		{
			cout << endl << "Stack is empty" ;
			return NULL ;
		}
		int data = stack[top] ;
		top-- ;
		return data ;
	}
	void calculate( )
	{
		int n1, n2, n3 ;
		while ( *s )
		{
			if ( *s == ' ' || *s == '\t' )
			{
				s++ ;
				continue ;
			}
			if ( isdigit ( *s ) )
			{
				nn = *s - '0' ;
				push ( nn ) ;
			}
			else
			{
				n1 = pop( ) ;
				n2 = pop( ) ;
				switch ( *s )
				{
					case '+' :
						n3 = n2 + n1 ;
						break ;
					case '-' :
						n3 = n2 - n1 ;
						break ;
					case '/' :
						n3 = n2 / n1 ;
						break ;
					case '*' :
						n3 = n2 * n1 ;
						break ;
					case '%' :
						n3 = n2 % n1 ;
						break ;
				}
	 
				push ( n3 ) ;
			}
			s++ ;
		}
	}
	void show( )
	{
		nn = pop ( ) ;
		cout << "Result is: " << nn ;
	}
};
 
void main( )
{
	char expr[MAX] ;
	cout << "\nEnter postfix expression to be evaluated : " ;
	gets(expr) ;
	postfix q ;
	q.setexpr ( expr ) ;
	q.calculate( ) ;
	q.show( ) ;
}
