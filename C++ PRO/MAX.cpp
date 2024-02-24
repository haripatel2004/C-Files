#include<stdio.h>

#include<iostream>
using namespace std;
class XYZ;
class ABC
{
	int a;
	public:
	void set()
	{
	    cout<<"enter the a :";
		cin>>a;
	}
	void show()
	{
	       cout<<"\n A"<<a;
	}
	friend int max(ABC,XYZ);
};
class XYZ
{
	int x;
	public:
	void set()
	{
		cout<<"enter the x :";
		cin>>x;
	}
	void show()
	{
		cout<<"\n A"<<x;
	}
	friend int max(ABC,XYZ);
};
int max(ABC A,XYZ X)
{
	 if(A.a>X.x)

		 return A.a;
	 else
		 return X.x;
}
int main()
{

	ABC A;
	XYZ X;
	A.set();
	X.set();
	cout<<"\n MAX:"<<max(A,X);
	return 0;
}