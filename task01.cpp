#include <iostream>
using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);

main()
{ 
int num1;
int num2;
cout << "Enter first number :" ;
cin>>num1;
cout << "Enter second number :" ;
cin>>num2;
add(num1,num2);
product(num1,num2);

   }



void add(int number1, int number2)
   { 
int add = number1 + number2;
cout <<"Sum is : " <<add<<endl;
   }
 


void product(int number1, int number2)
 {
int product = number1 * number2 ;
cout <<"Product is : "<<product<<endl;
} 

