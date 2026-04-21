
#include<iostream>
using namespace std;
int main()
{
    int num =4;
    // cout<<"Enter the size : ";
    // cin>>num;
    for (int i = 1; i<=4; i++) // rows
    {
        for ( int j=1; j <=4+1-i ; j++) //coloumns  can also do this ==>for ( int j=i; j <=num ; j++)
         {
             cout <<5-j;
         }
         cout<<endl;
    }
    return 0;
}