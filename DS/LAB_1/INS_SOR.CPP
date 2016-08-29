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
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}

	cout<<"\nThe Sorted Array is : \n";
	for(i=0; i<n; i++)
		cout<<'\t'<<arr[i];

	getch();
}