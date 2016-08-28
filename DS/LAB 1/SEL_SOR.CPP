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

	for(i=0; i<n; i++)
	{
		int small=arr[i], pos=i;
		for(int j=i+1; j<n; j++)
			if(small>arr[j])
			{
				small=arr[j];
				pos=j;
			}
		int temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
	}

	cout<<"\nThe Sorted Array is : \n";
	for(i=0; i<n; i++)
		cout<<'\t'<<arr[i];

	getch();
}