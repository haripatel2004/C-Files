#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j,n;
	clrscr();
	cout<<"enter the n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    for(j=i;j>=1;j--)
		{
			cout<<" "<<j;
		}
		cout<<"\n\n";
	}
	getch();
}