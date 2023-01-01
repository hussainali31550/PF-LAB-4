#include<iostream>
using namespace std;
void big(int num1,int num2);
int main()
{
 int num1,num2;
 cout<<"Enter first Number:";
 cin>>num1;
 cout<<"Enter Secound Number:";
 cin>>num2;
 big(num1,num2);
}
 void big(int num1,int num2)
{
 	if(num1>num2)
 	{
  	cout<<" greater number is: "<<num1;
  	}
 	if(num1<num2)
  	{
 	cout<<"greater number is:"<<num2;
	}
}