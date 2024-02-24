#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char *name;
	cout<<"enter the file name that u want to read";
	gets(name);
	ifstream in(name);
	char ch;
	while(in)
	{
		in.get(ch);
		cout<<ch;
	}
	in.close();
	return 0;
}