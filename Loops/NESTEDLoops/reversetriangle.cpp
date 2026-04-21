//Print the reverse triangle.
//    * * * * *
//    * * * *
//    * * *
//    * *
//    *
#include <iostream>
using namespace std;
int main() 
{
   // for(int i=5;i>=0;i--)
   int num=1;
    for(int i=4;i>0;i--)
    {
        for(int j =1;j<=i;j++)
        {
            cout<<num;
          
        }
        num++;
        cout<<endl;
    }
}