#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j,n,k;
	clrscr();
	cout<<"enter the n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			cout<<" ";
		}
		for(j=n;j>=i;j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	getch();
}