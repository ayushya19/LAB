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

	int s=0, e=n, m, pos=NULL;
	while(pos!=m)
	{
		m=(s+e)/2;
		if(tst<arr[m])
			e=m;
		else if(tst>arr[m])
			s=m;
		else pos=m;
	}

	if(pos!=0) cout<<"\nFound at "<<pos+1;
	else cout<<"\nFound nowhere";

	getch();
}