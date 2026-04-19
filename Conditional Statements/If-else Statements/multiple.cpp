//Create a program that takes two numbers and determines if the first number is a multiple of the second
# include <iostream>
using namespace std;
int main()
{
    int num_1;
    cout<<"Enter 1st number :";
     cin>>num_1;
    int num_2;
    cout<<"Enter 2nd number:";
     cin>>num_2;

    if (num_1%num_2==0)
    {
        cout<<"It's a multiple.";
    }
    else
    {
        cout<<"Not a multiple.";
    }
}