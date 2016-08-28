#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int lenOfString(char *str)
{
	int l=0;
	while(str[l] !='\0')
		l++;
	return l;
}

void stringConcat(char *str1, char *str2)
{
	int i=0, z=lenOfString(str1);
	while(str2[i]!='\0')
		str1[z++]=str2[i++];
	str1[z]='\0';
}

int stringCompare(char *str1, char *str2)
{
	int l1=lenOfString(str1);
	int l2=lenOfString(str2);

	if(l1<l2)
		return -1;
	else if(l1>l2)
		return 1;
	else
	{
		int i=0;
		while(str1[i]!='\0')
		{
			if(str1[i]<str2[i])
				return str1[i]-str2[i];
			else if (str1[i]>str2[i])
				return str1[i]-str2[i];
			i++;
		}
		return 0;
	}
}

void insertString(char *str1, char *str2, int s)
{
	int l1=lenOfString(str1);
	int l2=lenOfString(str2);
	for(int i=l1+l2+1; i>s; i--)
		str1[i]=str1[i-l2-1];
	for(i=0; i<l2; i++)
		str1[i+s+1]=str2[i];
}

void deleteString(char *str1, char *str2)
{
	int l1=lenOfString(str1);
	int l2=lenOfString(str2);
	char sub[100];
	for(int i=0; i<l1; i++)
	{
		if(i==0 || str1[i-1]==' ')
		{
			int z=0;
			while(str1[i]!=' ')
				sub[z++]=str1[i++];
			sub[z]='\0';
			if(stringCompare(sub, str2)==0)
			{
				i-=l2;
				for(; i<l1-l2; i++)
					str1[i]=str1[i+l2+1];
				goto exit;
			}
		}
	}
	exit:
}

void main()
{
	char str1[1000], str2[1000];
	int opt;
	while(opt!=6)
	{
		clrscr();
		cout<<"\n\n\tChoose an Option";
		cout<<"\n1. Find length of the String";
		cout<<"\n2. String Concatenation";
		cout<<"\n3. String Comparison";
		cout<<"\n4. Insert a Substring.";
		cout<<"\n5. Delete a Substring.";
		cout<<"\n6. Exit.\n\n";
		cin>>opt;

		switch(opt)
		{
			case 1:	clrscr();
				char str1[1000];
				cout<<"\nEnter the String : ";gets(str1);
				cout<<"\nThe length of the String is : ";
				cout<<lenOfString(str1);
				break;

			case 2:	clrscr();
				cout<<"\nEnter first String  : ";gets(str1);
				cout<<"\nEnter second String : ";gets(str2);
				stringConcat(str1, str2);
				cout<<"\nString after Concatenation is : "<<str1;
				break;

			case 3:	clrscr();
				cout<<"\nEnter first String  : ";gets(str1);
				cout<<"\nEnter second String : ";gets(str2);
				int x=stringCompare(str1, str2);
				if(x>0)	cout<<"\nString 2 is greater.";
				else if(x<0) cout<<"\nString 1 is greater.";
				else cout<<"\nStrings are Equal.";
				break;

			case 4:	clrscr();
				cout<<"\nEnter first String  : ";gets(str1);
				cout<<"\nEnter second String : ";gets(str2);
				cout<<"\nEnter Where do you want to insert?";
				int s;cin>>s;
				insertString(str1, str2, s);
				cout<<"\nString after Insertion is : "<<str1;
				break;

			case 5:	clrscr();
				cout<<"\nEnter first String  : ";gets(str1);
				cout<<"\nEnter second String : ";gets(str2);
				deleteString(str1, str2);
				cout<<"\nString after Deletion is : "<<str1;
				break;
			case 6: break;
		}
		getch();
	}
}