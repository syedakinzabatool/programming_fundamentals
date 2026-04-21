// Write a program to find out how many time multiple of 13 occurs between zero to until user choice.#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int userChoice;
    int count = 0;

    cout << "Enter a number: ";
    cin >> userChoice;

    // Loop through numbers from 0 to userChoice and count multiples of 13
    for (int i = 0; i <= userChoice; ++i) {
        if (i % 13 == 0) {
            count++;
        }
    }

    cout << "The number of multiples of 13 between 0 and " << userChoice << " is: " << count << endl;

    return 0;
}
