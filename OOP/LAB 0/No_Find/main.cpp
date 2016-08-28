#include <iostream>

using namespace std;

int main()
{
    int n, s, f=0;
    cout<<"\nEnter Number of integers : ";cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"\nEnter the Number to be Search : ";cin>>s;

    cout<<"\nFound : ";
    for(int i=0; i<n; i++)
        if (arr[i]==s)
        {
            f=1;
            cout<<i+1<<", ";
        }
    if(!f)
        cout<<"nowhere";

    return 0;
}
