#include <iostream>

using namespace std;

int main()
{
    int n1=0, n=0;
    cout<<"\nEnter the Number: ";cin>>n1;
    char str[32];
    while(n1)
    {
        int r=n1%2;
        if(r==1)
            str[n++]='1';
        else
            str[n++]='0';
        n1/=2;
    }
    str[n]='\0';
    strcpy(str, strrev(str));
    cout<<'\n'<<str;

    return 0;
}
