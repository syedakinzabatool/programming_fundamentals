#include <iostream>
using namespace std;
int main() {
    char uppercaseLetter, lowercaseLetter;

    cout << "Enter an uppercase letter: ";
    cin >> uppercaseLetter;

    // Convert uppercase to lowercase using ASCII values
    // Check if the entered character is an uppercase letter
    if (uppercaseLetter >= 'A' && uppercaseLetter <= 'Z') {
    // Convert by adding the ASCII difference between uppercase and lowercase letters
        lowercaseLetter = (char)(uppercaseLetter + ('a' - 'A'));

        cout << "Uppercase letter: " << uppercaseLetter << endl;
        cout << "Lowercase letter: " << lowercaseLetter << endl;
    } else {
        cout << "Please enter a valid uppercase letter." << endl;
    }

    return 0;
}
