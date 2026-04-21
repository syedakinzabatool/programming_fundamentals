//Program to find the length of a number
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int count=0;
   while(number!=0){
   number=number/10;
    count++;}
   cout<<count;
}  