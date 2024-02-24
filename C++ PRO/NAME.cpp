#include<iostream>
#include<stdio.h>
using namespace std;
class compare
{
    char na[10],ch[20];
    int i;
    int flag=0;
    
    public:
    void name()
    {
        cout<<"enter the name:";
        cin>>na;
        cout<<"\nenter name 2:";
        cin>>ch;
    }
    void show()
    {
       for(i=0;na[i]!=NULL;i++)
       { 
          
           if(na[i]!=ch[i])
           {
             flag=1;
           }
         
       }
       if(flag==1)
       {
       cout<<"Words are not equal";
       }
       else
       cout<<"Words are equal";
    }
};
int main()
{
    compare c;
    c.name();
    c.show();
  return 0;  
}