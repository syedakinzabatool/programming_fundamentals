/*20.	Write a simple calculator program to calculate sum, subtraction, multiplication, division 
and modulus of two numbers entered by user. Display menu to user for choice,
 if user enter choice is 1 then display sum, if user enter choice is 2 then display subtraction,
  if user enter choice is 3 then display multiplication, 
if user enter choice is 4 then display division. Using if-else statement.*/
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
   //Giving an option to user for choosing anything to display from menu
   cout<<"Menu for choice:"<<endl;
   cout<<"1.Sum/Addition of num_1 & num_2"<<endl;
   cout<<"2.Subtraction of num_1 & num_2"<<endl;
   cout<<"3.Multiplication of num_1 & num_2"<<endl;
   cout<<"4.Division of num_1 & num_2"<<endl;
   cout<<"5.Modulus of num_1 & num_2"<<endl;
   char choice;
   cout<<"Enter choice:";
   cin>>choice;
   if(choice=='1')
{
      cout<<num_1 + num_2;
}
else if (choice=='2')
{
      cout<<num_1 - num_2;
}
else if (choice=='3')
{
      cout<<num_1 * num_2;
}
else if(choice=='4')
{
      cout<<num_1 / num_2;
}
else if (choice=='5')
{
     cout<<num_1 % num_2;
}
else
     {cout<<"Enter a valid choice";}
}
