#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int n;
	cout<<"\n\tEnter the No. of elements : ";cin>>n;
	int *arr=new int[n];

	cout<<"\nEnter the Array : \n";
	for(int i=0; i<n; i++)
		cin>>arr[i];

	int tst=NULL, f=0;
	cout<<"\nEnter the No. you want to Search : ";cin>>tst;

	cout<<"\nFound : ";
	for(i=0; i<n; i++)
		if(arr[i]==tst)
		{
			f=1;
			cout<<i+1<<',';
		}

	if(f==0) cout<<"nowhere";

	getch();
}