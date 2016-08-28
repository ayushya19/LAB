#include <iostream.h>
#include <conio.h>

int rowSum(int arr[10][10], int row, int s)
{
	int sum=0;
	for(int j=0; j<s; j++)
		sum+=arr[row][j];

	return sum;
}

int colSum(int arr[10][10], int s, int col)
{
	int sum=0;
	for(int j=0; j<s; j++)
		sum+=arr[j][col];

	return sum;
}

int leftDiagSum(int arr[10][10], int s)
{
	int sum=0;
	for(int j=0; j<s; j++)
		sum+=arr[j][j];

	return sum;
}

int rightDiagSum(int arr[10][10], int s)
{
	int sum=0;
	for(int j=0; j<s; j++)
		sum+=arr[s-j-1][j];

	return sum;
}

void main()
{
	clrscr();
	int a[10][10], s;

	cout<<"\nEnter Size : ";cin>>s;

	cout<<"\nEnter Matrix 1 :\n";
	for(int i=0; i<s; i++)
		for(int j=0; j<s; j++)
			cin>>a[i][j];

	int frs=0, fcs=0;

	int r[10], c[10], lds, rds;

	for(i=0; i<s; i++)
		r[i]=rowSum(a, i, s);

	for(i=0; i<s; i++)
		c[i]=colSum(a, s, i);

	lds=leftDiagSum(a, s);
	rds=rightDiagSum(a, s);

	for(i=0; i<s-1; i++)
		if(r[i]!=r[i+1])
			frs=1;

	for(i=0; i<s-1; i++)
		if(c[i]!=c[i+1])
			fcs=1;

	if(r[0]==c[0] && r[0]==lds && r[0]==rds && frs!=1 && fcs!=1)
		cout<<"\nIt is a Magic Square.";
	else
		cout<<"\nIt is not a Magic Square.";

	getch();
}