#include<iostream>
using namespace std;

void totalAmount(string day,int finalAmount);
main()
{ 
string day;
int amount;
string sunday;
float finalAmount;
while(true){

cout<<"Enter Day : ";
cin>>day;
cout<<"Enter Amount : ";
cin>>amount;
totalAmount(day,finalAmount);

}

  if (day=="sunday"){
	float totalAmount=(amount*10)/100;
	float finalAmount=amount-totalAmount;}

  if (day!="sunday"){
	float totalAmount=amount;}

}


void totalAmount(string day,int finalAmount)
{
cout<<"Your payable amount is  : "<<finalAmount<<endl;
}

