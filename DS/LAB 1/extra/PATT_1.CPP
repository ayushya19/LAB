#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int n;
	cin>>n;
	for(int i=n; i>0; i--)
	{
		cout<<'\n';
		for(int j=0; j<i; j++)
			cout<<"\t*";
	}

	getch();
}