#include<stdio.h>
#include<iostream>
using namespace std;
template<class T,class T1> void show(T a, T1 b)
{
	cout<<"\n\n"<<a<<"\t\t"<<b;
}
int main()
{
	show("CHETAN","PATEL");
	show(123,"HELLO HOW ARE YOU?");
	show('C',123.456f);
	show("S","bye bye");
	return 0;
}