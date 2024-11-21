#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxEnding = 0, maxSoFar = arr[0];
    for (int i = 0; i < n; i++) {
        maxEnding = max(arr[i], maxEnding + arr[i]);  // Update the current sum
        maxSoFar = max(maxSoFar, maxEnding);         // Update the maximum sum so far
    }
    return maxSoFar;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array
    }

    cout << maxSubarraySum(arr, n) << endl;  // Output maximum sum
    return 0;
}

