#include <iostream>
using namespace std;
int power(int n,int p)
{
    if(p>0)
    {
        return n*power(n,p-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
int base,pow;
cout<<"Enter base:";
cin>>base;
cout<<"enter power:";
cin>>pow;
cout<<"the answer of entered power and base is"<<power(base,pow);
}