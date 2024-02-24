#include<stdio.h>
#include<conio.h>
#include<iostream.h>
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
	sample operator +(sample p)
	{
		sample temp;
		temp.a=a+p.a;
		temp.b=b+p.b;
		return temp;
	}
	int operator >(sample p)
	{
		if(a>p.a||b>p.b)
			return 1;
		else
			return 0;
	}
};
void main()
{
	clrscr();
	sample s,s1,s2;
	s.set();
	s1.set();
	s2=s+s1;
	s.show();
	s1.show();
	s2.show();
	if(s>s1)
		cout<<"\n\n\n s is higher";
	else
		cout<<"\n\n\n s1 is higher";
	getch();
}