#include<stdio.h>
#include<iostream>
using namespace std;
class emp
{
	int no;
	char name[20];
	public:
	void getemp()
	{
		cout<<"enter the no";
		cin>>no;
		cout<<"enter the name";
		gets(name);
	}
	void show()
	{
		cout<<"\n\n\t\t"<<no<<"\t\t"<<name;
	}
};
class salary : public emp
{
	int sal;
	public:
	void getsal()
	{
		cout<<"enter the salary";
		cin>>sal;
	}
	void showsal()
	{
		cout<<"\t\t"<<sal;
	}
};
int main()
{
	
	salary s;
	s.getemp();
	s.getsal();
	s.show();
	s.showsal();
	return 0;
}
