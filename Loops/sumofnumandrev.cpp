//Print the sum of given no. and it's  reverse
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int reverse=0;
     int sum=0;
     int total_sum;
     while(number!=0)
     {
        int last_digit=number%10;
        reverse=reverse*10;
        reverse=reverse+last_digit;
        number=number/10;       //  number/=10
        sum=sum+last_digit;
        total_sum=sum+reverse;
     }
   cout<<"The reverse is:"<<reverse<<endl;
   cout<<"The sum is:"<<sum<<endl;
   cout<<"The Total sum is:"<<total_sum;
}
