#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number to generate multiplication table: ";
    cin >> n;

    cout << "Multiplication Table up to " << n << ":\n";

    // Displaying the table in tabular format using nested loops
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i * j << "\t"; // Displaying the product
        }
        cout << "\n"; // Moving to the next row after completing a row
    }

    return 0;
}
