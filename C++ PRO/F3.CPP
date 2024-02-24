#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
	clrscr();
	char name[20];
	cout<<"enter the file name that  want to read";
	gets(name);
	ifstream read;
	read.open(name);
	char ch[20];
	while(read)
	{
		if((read.eof())!=0)
		{
			break;
		}
		read.getline(ch,10);
		cout<<ch<<endl;
	}
	read.close();
	getch();
}