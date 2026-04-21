#include <iostream>
using namespace std;

void display(int *p) {
    *p = *p-4;
    cout<<*p;
    }

int main() {
    int b = 5;
    display(&b);

    cout <<endl<< b;
}
