//write a program to print all the asci value and the equailent chahracter of alphabets using while loop.
/*#include <iostream>
using namespace std;
int main() {
 int Ascii_Value = 97;      // ASCII value for 'a'
 cout << "ASCII Values and Equivalent Characters for Alphabets:"<<endl;
 while (Ascii_Value <= 122) // ASCII value for 'z'
     { 
        char character = static_cast<char>(Ascii_Value);
        cout << "ASCII: " << Ascii_Value << "  Character: " << character << endl;
        Ascii_Value++;
     }
   return 0;
}
*/
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
            cout << "ASCII value of '" << ch << "' is: " << int(ch) << endl;
        }

    } while (ch != '0');
    cout << "Exiting the program." << endl;
    return 0;
}
