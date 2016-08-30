#include <iostream.h>
#include <conio.h>

class Matrix
{
	int r, c, value;
	public:
	Matrix()
	{  r=c=value=NULL;  }

	void input(int a, int b, int c)
	{  r=a, c=b, value=c;  }

	int giveValue(int a, int b)
	{
		if(r==a && c==b)       return value;
		else 	return NULL;
	}

	void transpose(Matrix *a, Matrix *b)
	{
		int rowTerms[maxCol]={0}, startingPos[maxCols];
		int i, j, numCols=a[0].col;
		int numTerms=a[0].value;
		b[0].row=numCols;
		b[0].col=a[0].row;
		b[0].value=numTerms;

		if(numTerms > 0)
		{
			for(i=1; i<numTerms; i++)
				rowTerms[a[i].col]++;

			startingPos[0]=1;
			for(i=1; i<numTerms; i++)
				startingPos[i]=startingPos[i-1]+rowTerms[i-1];

			for(i=1; i<=numTerms; i++)
			{
				j=startingPos[a[i].col]++;
				b[j].row=a[i].col;
				b[j].col=a[i].row;
				b[j].value=a[i].value;
			}
		}
	}
};

void main()
{
	cout<<"\nEnter the Matrix :\n";
	Matrix M[10];int z=1;
	for(int i=0; i<MaxRow; i++)
		for(int j=0; j<MaxCol; j++)
		{
			int k;
			cin>>k;
			if(k)
			{
				M[z++]=k;
				m[0].input(MaxRow, MaxCol, z);
			}
		}
	Matrix N[10];
	M[0].transpose(M, N);
	for(i=0; i<numCol; i++)
	{
		cout<<"\n";
		for(int j=0; j<numRows; j++)
		{
			if(m[

}