#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the number of A";
	cin>>a;
	cout<<"enter the number of B";
	cin>>b;
	cout<<"\n total"<<a+b;
	cout<<"\n\n"<<a<<"+"<<b<<"="<<a+b<<"\n";
	if(a>b)
	{
		cout<<a<<" is max";
	}
	else
	{
		cout<<b<<" is max";
	}
	return 0;
}