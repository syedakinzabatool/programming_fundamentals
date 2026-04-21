/* write a program that prints the following series:- 
1,-4,7,-10,13,-16.............................upto 100 
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i = i + 3) {
        if (i % 2 == 0) {
            cout << -i << " ";
        } else {
            cout << i << ",";
        }
    }

    return 0;
}