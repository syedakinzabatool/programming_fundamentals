
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size : ";
    cin>>num;
    for (int i = 1; i<=num; i++) // rows
    {
        for ( int j=i; j <=num ; j++) //coloumns
         {
             cout <<"* "; // could be i / j.
         }
         cout<<endl;
    }
    return 0;
}

/*#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the size : ";
    cin>>num;
    for (int i = 1; i<=num; i++) // rows
    {
        for ( int j=1; j <=i ; j++) //coloumns
         {
             cout <<j;
         }
         cout<<endl;
    }
    return 0;
}*/