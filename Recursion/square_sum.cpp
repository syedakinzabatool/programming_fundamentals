// Write a program that call the recursive function for printing the
// 0+12+22+…………..+n2
#include <iostream>
using namespace std;
// Recursive function to print the series 0^2 + 1^2 + 2^2 + ... + n^2
void printSeries(int n) {
    if (n == 0)
        cout << "0^2";
    else {
        printSeries(n - 1);
        cout << " + " << n << "^2";
    }
}
// Recursive function to calculate the sum of squares from 0 to n
int sumOfSquares(int n) {
    if (n == 0)
        return 0;
    else
        return n * n + sumOfSquares(n - 1);
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Series: ";
    printSeries(n);
    cout << "\nSum of squares: " << sumOfSquares(n) << endl;
    
    return 0;
}
