#define size 5
#include<stdio.h>
#include<iostream>
using namespace std;
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
	cin>>name;
	cout<<"enter the salary";
	cin>>sal;
	}
	void show()
	{
	cout<<"\n"<<no<<"\t"<<name<<"\t"<<sal;
	}
};
int main()
{
	emp e[size];
	int i;
	for(i=0;i<size;i++)
	{
	e[i].get();
	}
	for(i=0;i<5;i++)
	{
	e[i].show();
	}
	return 0;
}