# include <stdio.h>
# include <bits/conio.h>
# include <iostream.h>
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
		cout<<"\n\n"<<a<<"\t"<<b;
	}
	sample operator ++(int n)
	{
		sample temp;
		temp.a=a++;
		temp.b=b++;
		return temp;
	}
      };
      void main()
      {
	clrscr();
	sample s,s1;
	s.get();
	s.show();
	s1=s++;
	cout<<"\n s value";
	s.show();
	cout<<"\n s1 value";
	s1.show();
	getch();
      }
