
#include <iostream>
using namespace std;
void fact(int x){
    int product=1;
    for (int i=1;i<=x;i++){
        product=product*i;
     }
       cout<<product;
}
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
   
   fact(number);
}
