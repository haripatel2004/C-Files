#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class emp
{
	int no;
	char name[20];
	float sal;
	public:

		void set(int n,char nm[],float s)
		{
			no=n;
			strcpy(name,nm);
			sal=s;
		}
		float getsal()// this function will return a sal
		{
			return sal;
		}
		void show()
		{
			cout<<"\n\n"<<no<<"\t"<<name<<"\t"<<sal;
		}
	};
	int main()
	{
		
		emp e,e1;
		e.set(1,"BITNET INFOSYS",30000);
		e1.set(2,"BEST COMPUTER",25000);
		e.show();
		e1.show();

		if(e.getsal() > e1.getsal())
		cout<<"\n\n\n BITNET HAS HIGHER SALARY";
		else
		cout<<"\n\n\n BEST  HAS HIGHER SALARY";
		return 0;
	}