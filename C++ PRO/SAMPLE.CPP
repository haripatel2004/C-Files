#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class sample
{
	int a,b;
	public:

		sample()
		{
			a=100;
			b=222;
			cout<<"\n constructer is called";
		}
		sample(int c,int d)
		{
			a=c;
			b=d;
		}
		sample(int c)
		{
			a=c;
			b=0;
		}
		sample(sample &p)
		{
			a=p.a;
			b=p.b;
		}
		~sample()
		{
			cout<<"\n destructer called";
		}
	       void show()
		{
			cout<<"\n\n"<<a<<"\t"<<b;
		}
	};
	void main()
	{
		clrscr();
		sample s;
		{
			sample s1(1000,3333);
			{
				sample s2(22220);
				sample s3(s1);
				s.show();
				s1.show();
				s2.show();
				s3.show();
				getch();
			}
			getch();
		}
		getch();
	}

