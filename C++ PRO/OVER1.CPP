# include <stdio.h>
# include <conio.h>
# include <iostream.h>
class sample
{
	public:
	void sum()
	{
		int a,b;
		cout<<"enter the a";
		cin>>a;
		cout<<"enter the b";
		cin>>b;
		cout<<"\n\n\t TOTAL"<<a+b;
	}
	void sum(int a,int b)
	{
		cout<<"\n\n\t TOTAL"<<a+b;
	}
	void sum(float a,float b)
	{
		cout<<"\n\n\t TOTAL"<<a+b;
	}
	void sum(int a,float b)
	{
		cout<<"\n\n\t TOTAL"<<a+b;
	}
};
void main()
{
	sample s;
	clrscr();
	s.sum();
	s.sum(12,20.3f);
	s.sum(1,2);
	s.sum(1.2f,2.3f);
	getch();
}



