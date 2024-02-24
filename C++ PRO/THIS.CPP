#include<stdio.h>
#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
	void set(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	void show()
	{
		cout<<"\n\n\n  A "<<a<<"\n\n\n B "<<b;
	}
};
int main()
{
	sample s;
	s.set(1245,1235);
	s.show();
	return 0;
}