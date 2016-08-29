#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char str[1000], tst[100];
    int no=0, lo=0;

    cout<<"\nEnter the Sentence:\t";gets(str);
    cout<<"\nEnter the Test Word :\t";gets(tst);

    for (int i=0; i<strlen(str); i++)
    {
        char t1[100];
        if(i==0 || str[i-1]==' ')
        {
            int z=0;
            while(str[i]!=' ' && i<strlen(str))
            {
                    t1[z++]=str[i];
                    i++;
            }
            t1[z]='\0';
        }

        if (strcmpi(tst, t1)==0)
        {
            no++;
            lo=i;
        }
    }

    if(no==2)
    {
        for(int i=strlen(str)+strlen(tst)+1; i>lo; i--)
            str[i]=str[i-strlen(tst)-1];
        for(int i=0; i<strlen(tst); i++)
            str[i+lo+1]=tst[i];
    }

    cout<<'\n'<<str;
    return 0;
}
