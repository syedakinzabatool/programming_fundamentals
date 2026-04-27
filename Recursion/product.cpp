#include<iostream>
using namespace std;
int product (int n )
{
     
    if (n==1) return 1;
     return n* product(n-1);
    
}
int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
    cout<<product(n);

}