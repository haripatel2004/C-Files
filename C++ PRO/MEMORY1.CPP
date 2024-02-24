#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter the value of N";
	cin>>n;
	int *p=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter the value";
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n\n\t"<<p[i];
	}
	return 0;
	delete p;
}