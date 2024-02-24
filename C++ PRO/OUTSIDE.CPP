# include <stdio.h>
# include <conio.h>
# include <iostream.h>
# define size 5
class emp
{
      int no;
      char name[20];
      float sal;

      public:
	void get();
	void show();
};
void emp::get()
{
	     cout<<"enter the no";
	     cin>>no;
	     cout<<"enter the name";
	     gets(name);
	     cout<<"enter the salary";
	     cin>>sal;
	}
     void emp::show()
	{
		cout<<"\n"<<no<<"\t"<<name<<"\t"<<sal;
	}

void main()
{
	clrscr();
	int i;
	emp e[size];
	for(i=0;i<size;i++)
	{
		e[i].get();
	}
	for(i=0;i<5;i++)
	{
		e[i].show();
	}
	getch();
}