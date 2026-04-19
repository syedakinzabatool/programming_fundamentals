// Implement a calculator program that takes two numbers and 
// an operator (+, -, *, /) and performs the corresponding operation.
#include <iostream>
using namespace std;
int main() 
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
if(op == '+')
{
      cout<<num_1 + num_2;
}
else if(op == '-')
{
      cout<<num_1 - num_2;
}
else if(op == '*')
{
      cout<<num_1 * num_2;
}
else if(op == '/' )
{
      cout<<num_1 / num_2;
}
else
     {cout<<"Enter a valid operator.";}
}
/*
Write "Enter first number:"
Read num_1
Write "Enter second number:"
Read num_2
Write "Enter a valid operator"
Read op


*/