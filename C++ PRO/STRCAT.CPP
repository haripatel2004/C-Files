#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	char str[20],str1[20];
	cout<<"enter the string";
	gets(str);
	cout<<"enter the string 1";
	gets(str1);
	strcat(str,str1);
	cout<<str;
	return 0;
}