// write a code and check if the no. is prime or not?

#include <iostream>
using namespace std;
int main() 
{ int n;
 cout<<"Enter a number:";
 cin>>n;
    for(int i=n/2;i>=2;i--)
     if(n%i==0 ){
        cout<<i;
        break;
     }
}
