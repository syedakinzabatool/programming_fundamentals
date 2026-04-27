#include <iostream>
using namespace std;
int Power(int n,int p)
{
    if(p==0) return 1;
     return n*Power(n,p-1);  
}
int main()
{
int base,power;
cout<<"Enter base:";
cin>>base;
cout<<"enter power:";
cin>>power;
cout<<"the answer of entered power and base is"<<Power(base,power);
}