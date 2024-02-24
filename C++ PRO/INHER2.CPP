#include<stdio.h>
#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[20];
	public:
	void get()
	{
		cout<<"enter the roll no:";
		cin>>rollno;
		cout<<"enter the student name:";
		cin>>name;
	}
	void show()
	{
		cout<<"\n"<<rollno<<"\t"<<name;
	}
};
class marks : public student
{
	int m1,m2,m3;
	float per;
	char grade;
	public:
	void getmark()
	{
		cout<<"enter the marks1:";
		cin>>m1;
		cout<<"enter the marks2:";
		cin>>m2;
		cout<<"enter the marks3:";
		cin>>m3;
		per=(m1+m2+m3)/3.0;
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
	void showmark()
		{
			cout<<"\n"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<per<<"\t"<<grade;
		}

};
int main()
{

	marks m;
	m.get();
	m.getmark();
	m.show();
	m.showmark();
	return 0;
}