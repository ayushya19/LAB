#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char str[1000], tst[100];

    cout<<"\nEnter the Sentence:\t";gets(str);
    cout<<"\nEnter the Test Word <word>/<option>:\t";gets(tst);

    char opt=tst[strlen(tst)-1];
    tst[strlen(tst)-2]='\0';

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

        switch(opt)
        {
            case 'i':if (strcmpi(tst, t1)==0)
                        cout<<"\n\n\tText found.";
                     else
                        cout<<"\n\n\tText not found";
                     goto end;

            case 'w':if (strcmp(tst, t1)==0)
                        cout<<"\n\n\tText found.";
                     else
                        cout<<"\n\n\tText not found";
                     goto end;

            case 'f':if (strcmpi(tst, t1)==0 && i-strlen(tst)==0)
                        cout<<"\n\n\tText found at Front of Sentence.";
                     else
                        cout<<"\n\n\tText not found";
                     goto end;

            case 'e':if (strcmpi(tst, t1)==0 && i==strlen(str))
                        cout<<"\n\n\tText found at the End of Sentence.";
                     else
                        cout<<"\n\n\tText not found";
                     goto end;
            default :cout<<"Wrong option Entered!!!";
        }
    }

    end:
    return 0;
}
