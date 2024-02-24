#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<<"enter the value of your loop:";
	cin>>n;
	int *p=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"\n enter the value";
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n\n"<<p[i];
	}
	return 0;
	delete p;
}