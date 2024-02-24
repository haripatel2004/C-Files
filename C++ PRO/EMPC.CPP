#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class emp
{
	 int no;
	 char name[20];
	 float sal;
	 public:
	 emp()
	 {
		cout<<"enter the no";
		cin>>no;
		cout<<"enter the name";
		cin>>name;
		cout<<"enter the salary";
		cin>>sal;
		cout<<"constructors is called";
	 }
	 emp(int n,char nm[],float s)
	 {
		no=n;
		strcpy(name,nm);
		sal=s;
	 }
	 ~emp()
	 {
		cout<<"\n destructors is called";
	 }
	 void show()
	 {
		cout<<"\n"<<no<<"\t"<<name<<"\t"<<sal;
	 }
};
int main()
{
	
	emp e;
	e.show();
	return 0;
}