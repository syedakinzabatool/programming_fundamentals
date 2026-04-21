// Find the sum from 1 to n.
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int sum=0;
        for(int i=0;i<=number;i++)
         sum =sum+i;
        cout<<sum;
}