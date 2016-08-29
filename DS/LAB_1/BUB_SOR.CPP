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
		for(int j=0; j<n; j++)
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

	cout<<"\nThe Sorted Array is : \n";
	for(i=0; i<n; i++)
		cout<<'\t'<<arr[i];

	getch();
}