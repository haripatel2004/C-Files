#include<stdio.h>
#include<iostream>
using namespace std;
class maths
{
	public:
	 maths()
	 {
		int a=10,b=5;
		cout<<"enter the a";
		cin>>a;
		cout<<"enter the b";
		cin>>b;
		cout<<"\n\n\t\t"<<a+b;
	 }
	 maths(int,int)
	 {
		cout<<a+b;
	 }
	 maths(float,int)
	 {
		cout<<a+b;
	 }
	 maths(double,int)
	 {
		cout<<a+b;
	 }
};
int main()
{
	maths m;
	m.maths()
	m.maths(10,2);
	m.maths(10f,2);
	m.maths(5ld,2);
	m.show();
	m.show();
	m.show();
	m.show();
	return 0;
}