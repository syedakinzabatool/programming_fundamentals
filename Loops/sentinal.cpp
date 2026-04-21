//Write a program to take an input from user until found sentinel value (Sentinel value
 //may be any value like -999, -111). Calculate how many times user input number.
#include <iostream>
using namespace std;

int main() {
    int sentinelValue = -999; // Change this to the desired sentinel value
    int input;
    int count = 0;
    cout << "Enter numbers (sentinel value to stop):" << endl;
    cin>>input;
    while (input != sentinelValue) {
        count++;
        cin >> input;
    }
    
    cout << "Number of inputs before sentinel value: " << count << endl;

    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    int sentinelValue = -999; // Change this to the desired sentinel value
    int input;
    int count = 0;
    cout << "Enter numbers (sentinel value to stop):" << endl;
    
    while (cin >> input && input != sentinelValue) {
        count++;
    }
    
    cout << "Number of inputs before sentinel value: " << count << endl;

    return 0;
}
*/