#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cout<<'\n';
		for(int j=n; j>i; j--)
			cout<<' ';
		for(j=0; j<i; j++)
			cout<<i<<" ";
	}

	getch();
}