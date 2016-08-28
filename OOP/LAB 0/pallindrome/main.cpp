#include <iostream>

using namespace std;

int main()
{
    int n, n1=0, t;
    cout<<"\nEnter the Number : ";cin>>n;
    t=n;

    while(t)
    {
        n1=n1*10+t%10;
        t/=10;
    }
    if(n==n1)
        cout<<"\nNumber is Palindrome";
    else
        cout<<"\Number is Not Palindrome";

    return 0;
}
