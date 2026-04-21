
#include <iostream>
using namespace std;
int *increment_array(int A[], int x);
int *decrement_array(int A[], int x);
int main()
{
    int x;
    cout << "Enter the size of an Array: ";
    cin >> x;
    cout << "_" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    int *incrementedArray = increment_array(A, x);
    int *decrementedArray = decrement_array(A, x);

    cout << "Incremented array is :";
    for (int i = 0; i < x; i++)
    {
        cout << " " << incrementedArray[i];
    }
    cout << endl;

    cout << "Decremented array is : ";
    for (int i = 0; i < x; i++)
    {
        cout << " " << decrementedArray[i];
    }
    cout << endl;
    delete[] incrementedArray;
    delete[] decrementedArray;

    return 0;
}
int *increment_array(int A[], int x)
{
    int *ia = new int[x];

    for (int i = 0; i < x; i++)
    {
        ia[i] = A[i] + 1;
    }
    return ia;
}

int *decrement_array(int A[], int x)
{
    int *da = new int[x];
    for (int i = 0; i < x; i++)
    {
        da[i] = A[i] - 2;
    }
    return da;
}