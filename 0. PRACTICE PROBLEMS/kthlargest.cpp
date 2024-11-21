//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int kthLargest(int arr[], int size, int k) {
//    sort(arr, arr + size, greater<int>());
//    return arr[k-1]; // Corrected indexing for kth largest
//}
//
//int main() {
//    int arr[] = {3, 2, 1, 5, 6, 4};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int k = 2; // Example: finding the 2nd largest element
//
//    cout << "The " << k << "th largest element is " << kthLargest(arr, size, k) << endl;
//
//    return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;

int kthlargest(long long int arr[], long long int size, long long int k) {
    if (k > size || k <= 0) {
        cout << "Invalid value of k" << endl;
        return -1; // Return error value for invalid k
    }
    sort(arr, arr + size, greater<long long int>());
    return arr[k - 1];
}

int main() {
    long long int arr[] = {24214, 4242, 24225, 141232, 231312, 234, 1242, 12412412, 113421, 12412421334, 424};
    long long int size = sizeof(arr) / sizeof(arr[0]);
    long long int k = 10;

    int result = kthlargest(arr, size, k);
    if (result != -1) {
        cout << k << " largest element is " << result << endl;
    }
    return 0;
}






