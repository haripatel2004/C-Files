#include<stdio.h>
#include<conio.h>
#include<iostream.h>
template<class T> void swap(T &a, T &b)
{

	T temp;
	temp=a;
	a=b;
	b=temp;
}
void main()
{
	clrscr();
	int a=100,b=123;
	cout<<"\n\n"<<a<<"\t\t"<<b;
	swap(a,b);
	cout<<"\n\n"<<a<<"\t\t"<<b;
	char ch='A',ch1='M';
	cout<<"\n\n"<<ch<<"\t\t"<<ch1;
	swap(ch,ch1);
	cout<<"\n\n"<<ch<<"\t\t"<<ch1;
	getch();
}