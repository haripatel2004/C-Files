#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int number,firstdigit;
    string a[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
                "twelve","thirteen","fourteen","fiftheen","sixteen","seventeen","eighteen","nineteen","twenty"
                "thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

                cout<<"enter a number:";
                cin>>number;
                if(number==0)
                {
                    cout<<"number is 0";
                }

                else if(number>20)
                {
                    
                    firstdigit=number/10;            
                    cout<<a[17+firstdigit]<<" ";//30 to 90
                    number=number-firstdigit*10;//return the value
                }

                else if(number>=100)
                {
                    firstdigit=number/100;            
                    cout<<a[firstdigit]<<" "<<"hundred"<<" ";
                    number=number-firstdigit*100;//return the value
                }
       cout<<a[number];              
}