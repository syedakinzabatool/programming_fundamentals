/*Write a simple C++ program to display the month of the year.
Take an input of month from user to display its relevant month. 
For example, if user enter 1 then the program should be displaying a month is January.*/
#include <iostream>
using namespace std;
int main() 
{
int  month;
cin>>month;
switch (month) {
case 1 :
cout<<"January";
break;
case 2 :
cout<<"February";
break;
case 3 :
cout<<"March";
break;
case 4 :
cout<<"April";
break;
case 5 :
cout<<"May";
break;
case 6:
cout<<"June";
break;
case 7 :
cout<<"July";
break;
case 8 :
cout<<"August";
break;
case 9 :
cout<<"September";
break;
case 10 :
cout<<"October";
break;
case 11:
cout<<"November";
break;
case 12 :
cout<<"December";
break;
default:
cout<<"Invalid";
}
}