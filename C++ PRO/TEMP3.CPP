#include<stdio.h>
#include<iostream>
using namespace std;
template<class T>class myclass
{
	T a,b;
	public:
	myclass(T p,T q)
	{
		a=p;
		b=q;
	}
	void show()
	{
		cout<<"\n\n"<<a<<"\t\t"<<b;
	}
	~myclass()
	{
		cout<<"\n object is destroyed";
	}
};
int main()
{
	myclass <int> obj(123,345);
	myclass <char *> obj1("CHETAN","PATEL");
	myclass <float> obj2(123.2f,124.3);
	obj.show();
	obj1.show();
	obj2.show();
	return 0;
}