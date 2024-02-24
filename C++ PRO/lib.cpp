#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;
class student
{
    int i,n;
    char book[100],name[50];
    
    
    public:
    void get();
    void show();
};
 void student::get()
 {
     cout<<"how many students:";
        cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter student name:";
        cin>>name;
         cout<<"\n \t enter your book name:";
         cin>>book;

    }

}  

 
 void student::show()
 {
     for(i=0;i<n;i++)
     {
    cout<<"\n\n\n"<<name;
    cout<<"\t\t\t\t"<<book;
     }
     
 }
 int main()
 {
    student stu;
    stu.get();
    stu.show();

    time_t my_time = time(NULL);
    cout<<"\t\t\t\n";
    cout<<"your time:"<<ctime(&my_time);
 
    return 0;
 }