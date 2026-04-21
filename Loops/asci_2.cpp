#include <iostream>
using namespace std;
int main()
{
    char ch;
    do
    {
        cout << "Enter a character (or type '0' to exit): ";
        cin >> ch;

        if (ch != '0')
        {
            cout << "ASCII value of '" << ch << "' is: " << static_cast<int>(ch) << endl; //can also use int(ch)
        }

    } while (ch != '0');
    cout << "Exiting the program." << endl;
    return 0;
}