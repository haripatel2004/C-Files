#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
      int i,n,sum=0;
      clrscr();
      cout<<"enter the value of N";
      cin>>n;
      for(i=2;i<=n;i++)
      {
      if(n%i==0)
	{
		sum=1;
		break;
	}
      }
      if(sum==0)
      {
		cout<<"\n prime no"<<n;
      }
      else
      {
		cout<<"\n not prime"<<n;
      }
      getch();
}

