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
		cout<<"\n\n\t A:"<<a<<"\n\n\t B:"<<b;
	}
};
int main()
{
	sample s;
	s.set(10,20);
	s.show();
	return 0;
}

