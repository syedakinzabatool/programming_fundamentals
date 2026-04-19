// Write a program to check if a given year is a leap year or not using if-else state
#include <iostream>
using namespace std;
int main()
{
  int year;
  cout<<"Enter a year of your choice:";
  cin>>year;
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
  {
   cout<<"It's a leap year.";
  }
  else
  {
  cout<<"Not a leap year.";
  }
  return 0;
}

