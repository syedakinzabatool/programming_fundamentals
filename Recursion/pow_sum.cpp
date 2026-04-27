#include <iostream>
using namespace std;

void printSeries(int n) {
    if (n == 0)
        cout << "2^" << n + 1;
    else {
        printSeries(n - 1);
        cout << " + 2^" << n + 1;
    }
}

int Power(int n, int p) {
    if (p == 0) return 1;
    return n * Power(n, p - 1);
}

int main() {
    int base = 2; // base is 2 for this series
    int start = 0; // start from 0
    int end = 4; // end at 4
    cout << "Series is: ";
    printSeries(end);
    cout << endl;
    cout << "The answer of entered power and base is: " << Power(base, end + 1) - 1 << endl;
    return 0;
}
