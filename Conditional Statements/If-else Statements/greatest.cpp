// Develop a C++ program to find the largest among three numbers.
#include <iostream>
using namespace std;
int main() 
{
    int num_1;
    cout<<"Enter 1st number :";
     cin>>num_1;
    int num_2;
    cout<<"Enter 2nd number:";
     cin>>num_2;
    int num_3;
    cout<<"Enter 3rd number:";
     cin>>num_3;
     if((num_1 > num_2 ) && (num_1 > num_3))
    {
       cout<<"num_1 is the greatest number.";
    }   
    else if((num_2 > num_1) && (num_2 >  num_3))
    {
     cout<<"num_2 is the greatest number.";
    }
     else
     {
     cout<<"num_3 is the greatest number.";
     }     
}

    
