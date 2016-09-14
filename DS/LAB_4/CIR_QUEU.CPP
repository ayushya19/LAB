#include <iostream.h>
#include <conio.h>
#define SIZE 5
class cqueue
{
	int a[SIZE], f, r;

	public:

	cqueue()
	{  f=r=-1;}

	void ins()
	{
		if(f==(r+1)%SIZE)
				cout<<"\nQueue Overflow.";
		else
		{
			r=(r+1)%SIZE;
			cout<<"\nEnter the Value : ";cin>>a[r];
			if(f==-1)  f=0;
		}
	}

	int del()
	{
		if(r==-1 || f==r+1)
		{
			cout<<"\nQueue Empty";
			return NULL;
		}

		else
		{
			int k;
			if(f==r)
			{
				k=a[f];
				f=r=-1;
			}
			else
			{
				k=a[f];
				f=(f+1)%SIZE;
			}
			return k;
		}
	}

	void disp()
	{
		if (r==-1 || f==r+1)   cout<<"\nQueue Empty";

		else
		{
			int z=f;
			cout<<"\nQueue Elements :\n";
			do
			{
				cout<<a[z]<<'\t';
				z=(z+1)%SIZE;
			}while(z!=(r+1)%SIZE);
		}
	}
};

void main()
{
	cqueue C;
	int opt;
	do
	{
		cout<<"\n\tChoose an Option.";
		cout<<"\n1. Insert a value in Queue";
		cout<<"\n2. Delete an Element from Queue";
		cout<<"\n3. Display Elements in Queue";
		cout<<"\n4. Exit\n";
		cin>>opt;

		switch(opt)
		{
			case 1: clrscr();
				C.ins();
				break;
			case 2:	clrscr();
				int x=C.del();
				if(x!=NULL)  cout<<"\nElement deleted is "<<x;
				getch();
				break;
			case 3: clrscr();
				C.disp();
				getch();
				break;
		}
	}while(opt!=4);
}
