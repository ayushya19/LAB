#include <iostream.h>
#include <conio.h>

int arr[10];

void sort()
{
	static int i=0;
	int small=arr[i];
	int pos=i;
	for(int j=i+1; j<10; j++)
		if(small>arr[j])
		{
			small=arr[j];
			pos=j;
		}
	int temp=arr[i];
	arr[i]=arr[pos];
	arr[pos]=temp;
	i++;
	if(i<10) sort();
}

void main()
{
	clrscr();
	for(int i=0; i<10; i++)
		cin>>arr[i];

	sort();

	for(i=0; i<10; i++)
		cout<<arr[i]<<'\t';
	getch();
}