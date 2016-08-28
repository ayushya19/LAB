#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

class Student
{
	char name[200];
	int rno;
	char grade;

	public:

	Student(char *n='\0', int r=0, char g=NULL)
	{
		strcpy(name, n);
		rno=r;
		grade=g;
	}

	void read()
	{
		cout<<"\nEnter Name     : ";gets(name);
		cout<<"\nEnter Roll No. : ";cin>>rno;
		cout<<"\nEnter Grade    : ";cin>>grade;
	}

	void display()
	{
		cout<<"\nEnter Name     : "<<name;
		cout<<"\nEnter Roll No. : "<<rno;
		cout<<"\nEnter Grade    : "<<grade;
	}
	void sort(Student *s, int l)
	{
		for(int i=0; i<l; i++)
		{
			Student key(s[i].name,
				    s[i].rno,
				    s[i].grade);

			int j=i-1;
			while(j>=0 && s[j].rno>key.rno)
			{
				strcpy(s[j+1].name, s[j].name);
				s[j+1].rno=s[j].rno;
				s[j+1].grade=s[j].grade;
				j-=1;
			}
			strcpy(s[j+1].name, key.name);
			s[j+1].rno=key.rno;
			s[j+1].grade=key.grade;
		}
	}
};


void main()
{
	clrscr();
	int l;
	cout<<"\nEnter number of Enteries : ";cin>>l;

	Student *s=new Student[l];
	for(int i=0; i<l; i++)
		s[i].read();

	Student n;
	n.sort(s, l);

	for(i=0; i<l; i++)
	{
		cout<<'\n';
		s[i].display();
	}

	getch();

	delete s;
}