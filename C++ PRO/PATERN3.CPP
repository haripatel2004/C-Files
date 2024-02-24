#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter the n";
	cin>>n;
	for(i=n;i>1;i--)
	{
	    for(j=1;j<=i;j++)
		{
			cout<<" "<<j;
		}
		cout<<"\n\n";
	}
	for(j=1;i<=n;i++)
		{
		for(j=1;j<=i;j++)
		{
			cout<<" "<<j;
		}
		cout<<"\n\n";
	}
	return 0;
}