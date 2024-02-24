#include<stdio.h>
#include<iostream>
using namespace std;
class time
{
	int hour,minute,second;
	public:
	void get()
	{
		(hour=minute=second=0);
	}
	void get(int h,int m,int s)
	{
		hour=h;
		minute=m;
		second=s;
	}
	void show()
	{
		cout<<"\n"<<hour<<"\t"<<minute<<"\t"<<second;
	}
	time add(time p)
	{
		time temp;
		temp.hour=hour+p.hour;
		temp.minute=minute+p.minute;
		temp.second=second+p.second;
		if(temp.minute>=60)
		{
			temp.minute=temp.minute-60;
			temp.hour++;
		}
		if(temp.second>=60)
		{
			temp.second=temp.second-60;
			temp.minute++;
		}
		return temp;
	}
};
int main()
{
	class time t,t1,t2;
	t.get(10,20,30);
	t1.get(5,2,6);
	t2=t.add(t1);
	t2.show();
return 0;
}



