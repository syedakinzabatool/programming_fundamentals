#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int product;
     product=1;
     int i = 1;
    
    do
        
        
        {
          
         product =product*i;
         
         i++;
         }
         while(i<=number);
        cout<<product;
}