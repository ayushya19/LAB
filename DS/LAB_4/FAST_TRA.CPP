#include <iostream>
#define maxRow 3
#define maxCol 3

using namespace std;

class Matrix
{
	int row, col, value;
	
	public:
	Matrix()
	{  
		row=col=-1;
		value=0;  
	}

	void input(Matrix *m)
	{  
		m[0].row=maxRow, m[0].col=maxCol;
		m[0].value=0;
		for(int i=0; i<m[0].row; i++)
			for(int j=0; j<m[0].col; j++)
			{
				int k;
				cin>>k;
				if(k)
				{
					m[0].value++;
					m[m[0].value].row=i;
					m[m[0].value].col=j;
					m[m[0].value].value=k;
				}
			}  
	}

	int giveValue(int a, int b)
	{
		if(row==a && col==b)       return value;
		else 	return 0;
	}

	void transpose(Matrix *a, Matrix *b)
	{
		int numTerms=a[0].value;
		int rowTerms[maxCol]={0}, startingPos[maxCol];
		int i, j;
		b[0].row=a[0].col;
		b[0].col=a[0].row;
		b[0].value=numTerms;

		if(numTerms > 0)
		{
			for(i=1; i<=numTerms; i++)
				rowTerms[a[i].col]++;

			startingPos[0]=1;
			for(i=1; i<maxCol; i++)
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
	
	void display(Matrix *n)
	{
		int z=1;
		for(int i=0; i<n[0].row; i++)
		{
			cout<<"\n";
			for(int j=0; j<n[0].col; j++)
			{
				int tst=n[z].giveValue(i, j);
				if(tst)
				{
					cout<<tst<<'\t';
					z++;
				}
				else	cout<<"0\t";
			}
		}	
	}
};

int main()
{
	cout<<"\nEnter the Matrix :\n";
	Matrix M[10];
	
	M[0].input(M);
		
	Matrix N[10];
	
	N[0].transpose(M, N);
	N[0].display(N);
	
	return 0;
}
