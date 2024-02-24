#include<stdio.h>
#include<iostream>
using namespace std;
class teledir
{
	int teleno;
	char name[20],add[20],city[20];

	public:
		void get()
		{
			cout<<"enter the teleno";
			cin>>teleno;
			cout<<"enter the name";
			gets(name);
			cout<<"enter the address";
			gets(add);
			cout<<"enter the city";
			gets(city);
		}
		void show()
		{
			cout<<"\n"<<teleno<<"\t"<<name<<"\t"<<add<<"\t"<<city;
		}
};
void main()
{
	teledir e,e1;
	e.get();
	e1.get();
	e.show();
	e1.show();
	return 0;
}