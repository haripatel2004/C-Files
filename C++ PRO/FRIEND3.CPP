#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class cricket
{
	char pname[20],tname[20];
	float avg;
	public:
		void get()
		{
			cout<<"enter the player name";
			gets(pname);
			cout<<"enter the team name";
			gets(tname);
			cout<<"enter the bating avg";
			cin>>avg;
		}
		void show()
		{
			cout<<"\n\t"<<pname<<"\t"<<tname<<"\t"<<avg;
		}
	friend void sort(cricket*,int);
};
void sort(cricket *p,int n)
{
	cricket temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			if(p[i].avg<p[i+1].avg)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}
void main()
{
	clrscr();
	int n;
	cout<<"enter the how many player";
	cin>>n;
	cricket *c= new cricket[n];
	for(int i=0;i<n;i++)
	{
		c[i].get();
	}
	sort(c,n);
	for(i=0;i<n;i++)
	{
		c[i].show();
	}
	getch();
}

