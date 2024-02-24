#include<stdio.h>
#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
	void set()
	{
		cout<<"enter the a";
		cin>>a;
		cout<<"enter the b";
		cin>>b;
	}
	void show()
	{
		cout<<"\n\n"<<a<<"\t"<<b;
	}
	friend sample operator +(sample p,sample q);
	int operator >(sample p)
	{
		if(a>p.a||b>p.b)
			return 1;
		else
			return 0;
	}
};
sample operator +(sample p,sample q)
{
	sample temp;
	temp.a=q.a+p.a;
	temp.b=q.b+p.b;
	return temp;
}
int main()
{
	sample s,s1,s2;
	s.set();
	s1.set();
	s2=s+s1;
	s.show();
	s1.show();
	s2.show();
	if(s>s1)
		cout<<"\n s is a higher ";
	else
		cout<<"\n s1 is a higher";
	return 0;
}

