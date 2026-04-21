
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size : ";
    cin>>num;
    for (int i = 1; i<=num; i++) // rows
    {
        for ( int j=1; j <=num+1-i ; j++) //coloumns  can also do this ==>for ( int j=i; j <=num ; j++)
         {
             cout <<"*";
         }
         cout<<endl;
    }
    return 0;
}