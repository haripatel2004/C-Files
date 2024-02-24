#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class string
{
	char *name;
	public:
	void set(char *s)
	{
		name=new char[strlen(s)+1];
		strcpy(name,s);
	}
	~string()
		{
			delete name;
		}
	void show()
	{
		cout<<"\n\n\t"<<name;
	}
};
void main()
{
	clrscr();
	int i,n;
	cout<<"enter how many object you want to create";
	cin>>n;
	string *s=new string[n];
	for(i=0;i<n;i++)
	{
		char *p;
		cout<<"enter the name";
		gets(p);
		s[i].set(p);
	}
	for(i=0;i<n;i++)
	{
		s[i].show();
	}
	getch();
	delete s;
}