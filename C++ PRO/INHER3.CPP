#include<stdio.h>
#include<iostream>
using namespace std;
class emp
{
	int no;
	char name[20];
	public:
	void get()
	{
		cout<<"enter the no";
		cin>>no;
		cout<<"enter the name";
		cin>>name;
	}
	void show()
	{
		cout<<"\n\t"<<no<<"\t"<<name;
	}
};
class salary : public emp
{
	int bs,net;
	public:
	void getsal()
	{
		cout<<"enter the salary";
		cin>>bs;
		net=bs+5000;
	}
	void showsal()
	{
		cout<<"\n BASIC SALARY"<<bs<<"\t NET SALARY:"<<net;
	}
	float sal()
	{
		return net;
	}
};
class annual : public salary
{
	float asal;
	public:
	void getansal()
	{
		asal=sal()*12;
	}
	void showansal()
	{
		cout<<"\n ANNUAL SALARY:"<<asal;
	}
};
int main()
{
	annual s;
	s.get();
	s.getsal();
	s.getansal();
	s.show();
	s.showsal();
	s.showansal();
	return 0;
}
