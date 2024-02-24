

#include<iostream>
using namespace std;
int main()
{
		int a,b;
		cout<<"enter the a";
		cin>>a;
		cout<<"enter the b";
		cin>>b;
		try
		{
		if(b==0)
	             	throw"demominator cannot be zero";
		else
		cout<<"\n  division="<<a/b;
		}

		catch(char *s)
		{
		cout<<"Error "<<s;
		}
		cout<<"\n End of program \n";
}
