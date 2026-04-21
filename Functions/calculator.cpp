/* Implement a calculator program that takes two numbers and 
 an operator (+, -, *, /) and performs the corresponding operation.*/
#include <iostream>
using namespace std;
 void addition(int x , int y)
   {
  cout<< x + y;
   }
   void subtraction(int x , int y)
   {
  cout<<x - y;
   }
   void multiplication(int x , int y)
   {
   cout<<x * y;
   }
   void  division(int x , int y)
   {
 cout<<x / y;
   }

int  main() 
{ 
   int num_1;
   cout<<"Enter 1st number :";
   cin>>num_1;
   int num_2;
   cout<<"Enter 2nd number:";
   cin>>num_2;
   char op ;
   cout<<"Enter an operator:";
   cin>>op;
  
if(op == '+'){
   addition(num_1 , num_2); 
}
else if(op == '-')
{
    subtraction(num_1 , num_2);
}
else if(op == '*')
{
   multiplication(num_1 , num_2);
}
else if(op == '/' )
{
    division(num_1, num_2);
}
else
     {cout<<"Enter a valid operator.";}
}