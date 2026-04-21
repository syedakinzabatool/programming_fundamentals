#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    
    // Computing prefix sums
    int pre[x];
    pre[0] = A[0];
    for (int i = 1; i < x; i++) {
        pre[i] = pre[i - 1] + A[i];
    }
    
    int max_sum = INT_MIN;
    for (int start = 0; start < x; start++) {
        for (int end = start; end < x; end++) {
            // Calculate the sum of the subarray from start to end
            int sum = pre[end] - pre[start] + A[start];
            // Update max_sum if the sum is greater
            max_sum = max(max_sum, sum);
        }
    }
    
    // Print the maximum sum
    cout << "Maximum subarray sum is: " << max_sum << endl;

    return 0;
}
