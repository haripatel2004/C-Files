#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class emp
{
	int no;
	char name[20];
	float sal;

	public:
		void get()
			{
			 cout<<"enter the no";
			 cin>>no;
			 cout<<"enter the name";
			 gets(name);
			 cout<<"enter the salary";
			 cin>>sal;
			}
		void show()
		{
			cout<<"\n"<<no<<"\t"<<name<<"\t"<<sal;
		}
	};
	void main()
	{
		clrscr();
		emp e,e1;
		e.get();
		e1.get();
		e.show();
		e1.show();
		getch();
	}
