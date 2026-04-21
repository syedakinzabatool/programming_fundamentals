#include <iostream>
using namespace std;
bool Equal_Array(int A_1[], int A_2[], int length_1, int length_2) {
    if (length_1 != length_2)
        return false;
    
    for (int i = 0; i < length_1; i++) {
        if (A_1[i] != A_2[i])
            return false;
    }
    
    return true;
}
int main() {
    int length_1;
    cout << "Enter size of first array:";
    cin >> length_1;

    int A_1[length_1];
    cout << "Enter elements of first array:";{
    for (int i = 0; i < length_1; i++) 
        cin >> A_1[i];
    }
    int length_2;
    cout << "Enter size of second array:";
    cin >> length_2;

    int A_2[length_2];
    cout << "Enter elements of second array:";
    for (int i = 0; i < length_2; i++) {
        cin >> A_2[i];
    }

    cout << "First array:";
    for (int i = 0; i < length_1; i++) {
        cout << A_1[i] << " ";
    }
    cout << endl;

    cout << "Second array:";
    for (int i = 0; i < length_2; i++) {
        cout << A_2[i] << " ";
    }
    cout << endl;

    if (Equal_Array(A_1, A_2, length_1, length_2)) {
        cout << "Arrays are equal." << endl;
    } else {
        cout << "Arrays are not equal." << endl;
    }}