/* 1. Pattern Printing:*
   Write a C++ program to print the following pattern using nested loops:
   
   *
   * *
   * * *
   * * * *
   * * * * *  */

 # include <iostream>
using namespace std;
int main()
{
for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}