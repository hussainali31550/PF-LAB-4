#include <iostream>
using namespace std;

void ifPass(int marks);

main()
{
while(true){ 
int marks;
cout<<"Enter your marks : ";
cin>>marks;
ifPass(marks);
}}

void ifPass(int marks)
{
   if(marks > 50) { 

	cout <<"You have pass the quiz "<<endl;
}
  if (marks==50){
	cout<<"You barely pass "<<endl;
}
  if (marks<50)
	{cout<<"You have failed successfully"<<endl;}
}
