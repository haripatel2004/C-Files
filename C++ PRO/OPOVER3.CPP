#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>
class string
{
	char *name;
	public:
	string()
	{
	}
	string(char s[])
	{
		name=new char[strlen(s)+1];
		strcpy(name,s);
	}
	void show()
	{
		cout<<"\n"<<name;
	}
	friend string operator +(string p,string q);
};
string operator +(string p,string q)
{
	string temp;
	temp.name=new char[strlen(q.name)+strlen(p.name)+1];
	strcpy(temp.name,p.name);
	strcat(temp.name,q.name);
	return temp;
}
void main()
{
	clrscr();
	string s("\n CHETAN "),s1("PATEL"),s2;
	s2=s+s1;
	s.show();
	s1.show();
	s2.show();
	getch();
}




