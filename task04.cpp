#include <iostream>
using namespace std;

void isEligible(int age);
main()
{ 
int age;
while(true){
cout<<"Enter your Age : ";
cin>>age;
isEligible(age);
}

if(age>18)
{cout<<"You are Eligible for vote ";}

if(age==18)
{cout<<"You are Eligible for vote ";}

if(age<18)
{cout<<"You are NOT Eligible for vote ";}

}


void isEligible(int age){
cout<<"You are eligible for vote"<<endl;}