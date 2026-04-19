//Implement a C++ program to determine whether a given number is positive, negative, or zero.
#include <iostream>
using namespace std;
int main()
{ int number;
cout<<"Enter an integer:";
cin>>number;
  if(number >0)
 {
   cout<<"Positive integer.";
 }
else
  if(number<0)
  {
    cout<<"Negative integer.";
  }
else
 {
  cout<<"Zero";
 }
}
