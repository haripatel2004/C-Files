#include<stdio.h>
#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
	void get()
	{
		cout<<"enter the a";
		cin>>a;
		cout<<"enter the b";
		cin>>b;
	}
	void show()
	{
		cout<<"\n\n"<<a<<"\t\t"<<b;
	}
	friend float mean(sample p)


	float mean(sample p)
	{
	return (p.a+p.b)/2.0f;
	}

};
int main()
{
	//mean m;
	m.get();
	m.show();
	cout<<"mean"<<mean(a,b);
	return 0;
}

