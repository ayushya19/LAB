#include <iostream.h>
#include <conio.h>

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

void main()
{
	clrscr();
	int a[10][10], b[10][10], f[10][10], r, c;

	cout<<"\nEnter Number of Rows/Cols : ";cin>>r>>c;

	cout<<"\nEnter Matrix 1 :\n";
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin>>a[i][j];

	cout<<"\nEnter Matrix 2 :\n";
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			cin>>b[i][j];

	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			f[i][j]=max(a[i][j], b[i][j]);

	cout<<"\nMatrix 3 :\n";
	for(i=0; i<r; i++)
	{
		cout<<'\n';
		for(j=0; j<c; j++)
			cout<<f[i][j]<<'\t';
	}

	getch();
}
