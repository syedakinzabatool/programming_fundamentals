/*
12345
12345
12345
12345
12345*/
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size : ";
    cin>>num;
    for (int i = 1; i<=num; i++)
    {
        for ( int j=1; j <= num; j++)
         {
             cout <<j;
         }
         cout<<endl;
    }
    return 0;
}