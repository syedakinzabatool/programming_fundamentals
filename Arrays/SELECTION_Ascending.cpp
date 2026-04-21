//Print elements of index in Ascending order ....
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number of elements in an Array :";
    cin >> x;
    cout << "-----------------------------------------------" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number :";
        cin >> A[i];
    }
    for (int i = 0 ; i < x-1; i++)     //1st index will b compared with the all of the elements by jth loop           
    {
        for (int j = i + 1; j < x; j++)
        {                                   
            if (A[i] > A[j])         //L>R
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
/*#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/