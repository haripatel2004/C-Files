#include<stdio.h>
#include<conio.h>
#include<iostream.h>
template<class T>
void show(T a,T b);

	cout<<"\n\n"<<a<<"\t\t"<<b;

void main()
{
	clrscr();
	show("chetan","patel");
	show(123,456);
	show(12.2f,14.5f);
	show('A','N');
	getch();
}
