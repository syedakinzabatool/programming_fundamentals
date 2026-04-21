//print a multiplication table.

#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int last_number;
    cout<<"Enter upto you want to print a table:";
    cin>>last_number;

for(int i=1;i<=last_number;i++)
    {   
    if(i%number==0)
    cout<<i<<endl;
    }
}