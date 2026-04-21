// find the product of every number entered.
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int product=1;
     while(number!=0){
        int last_digit=number%10;
         number=number/10;       //number/=10
        product= product*last_digit;  //product+=last_digit
         }
   cout<<product;
}