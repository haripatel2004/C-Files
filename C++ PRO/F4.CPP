#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
	clrscr();
	char name[20];
	cout<<"enter the file name that u want to read";
	gets(name);
	cout<<"\n original file \n";
	ifstream read;
	read.open(name);
	char ch;
	while(read)
	{
		read.get(ch);
		cout<<ch;
	}
	read.close();
	cout<<"\n new reading a file using seekg() function \n";
	ifstream read1(name);
	while(read1)
	{
		read1.get(ch);
		read1.seekg(2,ios :: cur);
		cout<<ch;
	}
	read1.close();
	getch();
}