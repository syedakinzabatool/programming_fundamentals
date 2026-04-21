// Nested Loop for Prime Number Pattern:*
  // Create a C++ program using nested loops to print a pattern 
  // where each number is replaced by 'P' if it's prime and 'NP' if it's not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the nth number: ";
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        bool x = true;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                x = false;
                break;
            }
        }
        if (x==true)
        {
            cout << i << " is a Prime Number "<<endl;
        }
        else
        {
            cout << i << " is a Non Prime Number "<<endl;
        }
    }
    return 0;
}