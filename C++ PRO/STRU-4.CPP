#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class student
{
	int rollno,m1,m2;
	char name[20],grade;
	float per;

	public:
		void get()
			{
			 cout<<"enter the rollno";
			 cin>>rollno;
			 cout<<"enter the NAME";
			 gets(name);
			 cout<<"enter the marks1";
			 cin>>m1;
			 cout<<"enter the marks2";
			 cin>>m2;
			 per=(m1+m2)/2.0;
			 if(per>=75)
			 {
				grade='A';
			 }
			 else if(per>=60 && per<=75)
			 {
				grade='B';
			 }
			 else if(per>=50 && per<=60)
			 {
				grade='C';
			 }
			 else if(per>=35 && per<=50)
			 {
				grade='D';
			 }
			 else if(per<=35)
			 {
				grade='F';
			 }

			}
		void show()
		{
			cout<<"\n"<<rollno<<"\t"<<name<<"\t"<<m1<<"\t"<<m2<<"\t"<<per<<"\t"<<grade;

		}
	};
	void main()
	{
		clrscr();
		student e,e1,e2;
		e.get();
		e1.get();
		e2.get();
		e.show();
		e1.show();
		e2.show();
		getch();
	}
