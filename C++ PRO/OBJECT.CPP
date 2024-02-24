/*passing an object and returning an object*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
class  time
{
	 int hr,min;
	 public:
		void gettime()
		{
		      cout<<"enter the hour";
		      cin>>hr;
		      cout<<"enter the min";
		      cin>>min;
		}
		void showtime()
		{
			cout<<"\n\t"<<hr<<":"<<min;
		}
		time add(time p)
		{
			time temp;
			temp.hr=hr+p.hr;
			temp.min=min+p.min;
			if(temp.min>=60)
			{
				temp.min=temp.min-60;
				temp.hr++;
			}

			return temp;
		}
	 };
	 void main()
	 {
		time t,t1,t2;
		clrscr();
		t.gettime();
		t1.gettime();
		t.showtime();
		t1.showtime();
		t2=t1.add(t);
		cout<<"\n-------------------------------\n";
		t2.showtime();
		getch();
		}
