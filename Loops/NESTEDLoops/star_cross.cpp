
#include <iostream>
using namespace std;
int main()
{
    int  n;
    int count;

    cout << "Enter number : ";
    cin >> n;
    count = n * 2 - 1;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (j == i || (j == count - i + 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}