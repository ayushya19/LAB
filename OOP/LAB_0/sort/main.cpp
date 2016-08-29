#include <iostream>

using namespace std;

int main()
{
    char str[100][100][100], tmp[100], mini[100];
    int r=0, c=0;
    cout<<"\nEnter number of Rows: ";cin>>r;
    cout<<"\nEnter number of Cols: ";cin>>c;

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>str[i][j];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            for(int k=0; k<c-1; k++)
                if (strcmp(str[i][k], str[i][k+1])>0)
                {
                    strcpy(tmp, str[i][k]);
                    strcpy(str[i][k], str[i][k+1]);
                    strcpy(str[i][k+1], tmp);
                }

    for(int i=0; i<r; i++)
    {
        cout<<'\n';
        for(int j=0; j<c; j++)
            cout<<str[i][j]<<"\t\t";
    }

    return 0;
}
