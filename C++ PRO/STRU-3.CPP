#include<stdio.h>
#include<iostream>
using namespace std;
class books
{
	char name[20],auther[20],edition[20];
	float bookcode,price;

	public:
		void get()
			{
			 cout<<"enter the BOOKCODE";
			 cin>>bookcode;
			 cout<<"enter the NAME";
			 gets(name);
			 cout<<"enter the AUTHER";
			 gets(auther);
			 cout<<"enter the EDITION";
			 gets(edition);
			 cout<<"enter the price";
			 cin>>price;
			}
		void show()
		{
			cout<<"\n"<<bookcode<<"\t"<<name<<"\t"<<auther<<"\t"<<edition<<"\t"<<price;

		}
	};
	void main()
	{
		clrscr();
		books e,e1,e2;
		e.get();
		e1.get();
		e2.get();
		e.show();
		e1.show();
		e2.show();
		getch();
	}
