#include<iostream>
using namespace std;

void searching(int A[100][100], int rows, int cols, int key) {
    bool flag = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (A[i][j] == key) {
                cout << "Element found at position (" << i << ", " << j << ")" << endl;
                flag = true;
            }
        }
    }

    if (!flag)
        cout << "Element not found" << endl;
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int A[100][100];

    cout << "Enter the elements of A:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> A[i][j];
        }
    }

    cout << "Enter the element to search: ";
    int key;
    cin >> key;

    searching(A, rows, cols, key);

    return 0;
}
