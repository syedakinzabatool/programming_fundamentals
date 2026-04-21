
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size : ";
    cin>>num;
   
    for (int i = 1; i<=num; i++)
    {
        for ( int j=1; j <= num; j++)   //ASCII VALUE of A is 65 and of a is 97.
         {
             cout << (char)(j+96); //could be i 
         }
         cout<<endl;
    }
    return 0;
}