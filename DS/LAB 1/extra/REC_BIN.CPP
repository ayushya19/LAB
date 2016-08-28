#include <iostream.h>
#include <conio.h>

int arr[10];
int binarySearch(int s, int e, int tst)
{
	static int pos=NULL;
	int m=(s+e)/2;

	if(pos==m)
		return pos;
	else if(tst<arr[m]) e=m;
	else if(tst>arr[m]) s=m;
	else if(e==s+1) return NULL;
	else pos=m;

	binarySearch(s, e, tst);
}

void main()
{
	clrscr();
	int n;
	cout<<"\nEnter No. of Elements : ";cin>>n;

	for(int i=0; i<n; i++)
		cin>>arr[i];

	int tst;
	cout<<"\nEnter the No. you want to Search.";cin>>tst;

	int pos=binarySearch(0, n, tst);

	if(pos!=NULL)
		cout<<"\nElement found at "<<pos+1;
	else
		cout<<"\nElement not found.";

	getch();
}
