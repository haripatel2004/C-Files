#include<stdio.h>
#include<iostream>
using namespace std;
class cricket
{
	char tname[20],pname[20];
	float batavg;

	public:
		void get()
			{
			 cout<<"enter the team name";
			 cin>>tname;
			 cout<<"enter the player name";
			 cin>>pname;
			 cout<<"enter the bating average";
			 cin>>batavg;
			}
		void show()
		{
			cout<<"\n"<<tname<<"\t"<<pname<<"\t"<<batavg;
		}
	};
    int main()
	{
		class cricket e,e1;
		e.get();
		e1.get();
		e.show();
		e1.show();
		return 0;
	}
