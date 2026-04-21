//Print the given no. in reverse order
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int reverse=0;
     while(number!=0){
        int last_digit=number%10;
        reverse=reverse*10;
        reverse=reverse+last_digit;
        number=number/10;       //number/=10
         }
   cout<<reverse;
}