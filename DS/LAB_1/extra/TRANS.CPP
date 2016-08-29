#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int a[10][10], r, c;

	cout<<"\nEnter Number of Rows/Cols : ";cin>>r>>c;

	cout<<"\nEnter Matrix 1 :\n";
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin>>a[i][j];

	for(i=0; i<r; i++)
		for(j=i; j<c; j++)
		{
			int t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}

	cout<<"\nTranspose of Matrix :\n";
	for(i=0; i<r; i++)
	{
		cout<<'\n';
		for(j=0; j<c; j++)
			cout<<a[i][j]<<'\t';
	}

	getch();
}
