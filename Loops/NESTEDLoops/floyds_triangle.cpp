/*
1
23
456
78910*/
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size : ";
    cin>>num;
    int a=1;
    for (int i = 1; i<=num; i++) // rows
    {
        for ( int j=1; j <=i ; j++) //coloumns
         {
             cout<<a++<<" ";  // cout<<a;
        // a++;
         }
         cout<<endl;
    }
    return 0;
}