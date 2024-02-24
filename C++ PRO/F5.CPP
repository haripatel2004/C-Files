#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<iostream.h>
class emp
{
	int no;
	char name[20];
	float sal;
	public:
		void get()
		{
			cout<<"enter the no";
			cin>>no;
			cout<<"enter the name";
			gets(name);
			cout<<"enter the salary";
			cin>>sal;
		}
		void show()
		{
			cout<<"\n\n"<<no<<"\t"<<name<<"\t"<<sal;
		}
};
void main()
{
	emp e;
	clrscr();
	e.get();
	ofstream out("emp.txt",ios :: app);
	out.write((char*) &e,sizeof(e));
	out.close();
	ifstream in("emp.txt");
	while(in.read((char*) &e,sizeof(e)))
	{
		e.show();
	}
	cout<<"\n total record:"<<in.tellg()/sizeof(e);
	in.close();
	getch();
}