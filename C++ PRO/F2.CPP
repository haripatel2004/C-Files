#include<stdio.h>
#include<bits/conio.h>
#include<iostream>
#include<fstream.h>
using namespace std;
void main()
{
	//clrscr();
	int no;
	char name[20];
	ofstream out("hello.txt");
	cout<<"enter the no";
	cin>>no;
	cout<<"enter the name";
	gets(name);
	out<<no;
	out<<name;
	out<<"\n this statement is written in file \n";
	out.close();
	char ch;
	cout<<"\n constant of file \n";
	ifstream in("hello.txt");
	while(in)
	{
		in.get(ch);
		cout<<ch;
	}
	in.close();
	getch();
}