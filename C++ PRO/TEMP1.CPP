#include<stdio.h>
#include<conio.h>
#include<iostream.h>
template<class T> void show(T a, T b)
{
	cout<<"\n\n"<<a<<"\t\t"<<b;
}
void main()
{
	clrscr();
	show("chetan","patel");
	show(123,453);
	show(23.5f,45.36f);
	show('A','Z');
	getch();
}