#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int sum=0;
     while(number!=0){
        int last_digit=number%10;
        number=number/10;       //number/=10
        sum= sum+last_digit;  //sum+=last_digit
         }
   cout<<sum;
}