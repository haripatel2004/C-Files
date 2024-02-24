#include<stdio.h>
#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
	void set()
	{
		cout<<"enter the value of A";
		cin>>a;
		cout<<"enter the value of B";
		cin>>b;
	}
	void show()
	{
		cout<<a+b;
	}
	friend float mean(sample);
};
float mean(sample p)
{
	return (p.a+p.b)/2.0;
}
int main()
{
	sample s;
	s.set();
	s.show();
	cout<<"\n mean:"<<mean(s);
	return 0;
}