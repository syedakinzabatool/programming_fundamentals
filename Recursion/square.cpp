/*Write a program that call the recursive function for printing the
1^2
2^2
…………n^2
*/
#include <iostream>
using namespace std;
void printSquares(int n, int current = 1) {
    if (current > n)
        return;
    else {
        cout << current << "^2 = " << current * current << endl;
        printSquares(n, current + 1);
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Printing squares from 1^2 to " << n << "^2:\n";
    printSquares(n);
    
    return 0;
}
