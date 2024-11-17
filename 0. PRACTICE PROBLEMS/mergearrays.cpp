#include <iostream>
using namespace std;

// Function to merge two sorted arrays
int* mergeArrays(int a[], int b[], int asize, int bsize) {
    int* merged = new int[asize + bsize];  // Dynamically allocate memory for the merged array
    int i = 0, j = 0, k = 0;

    // Merge the arrays until one of them is exhausted
    while (i < asize && j < bsize) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy the remaining elements of the first array, if any
    while (i < asize) {
        merged[k++] = a[i++];
    }

    // Copy the remaining elements of the second array, if any
    while (j < bsize) {
        merged[k++] = b[j++];
    }

    return merged;  // Return the base address of the merged array
}

int main() {
    int asize, bsize;

    // Input size and elements of the first array
    cout << "Enter size of the first array: ";
    cin >> asize;
    int a[asize];
    cout << "Enter elements of the first array (sorted): ";
    for (int i = 0; i < asize; i++) {
        cin >> a[i];
    }

    // Input size and elements of the second array
    cout << "Enter size of the second array: ";
    cin >> bsize;
    int b[bsize];
    cout << "Enter elements of the second array (sorted): ";
    for (int i = 0; i < bsize; i++) {
        cin >> b[i];
    }

    // Call the mergeArrays function
    int* mergedArray = mergeArrays(a, b, asize, bsize);

    // Output the merged array
    cout << "Merged array: " << endl;
    for (int i = 0; i < asize + bsize; i++) {
        cout << mergedArray[i] << endl;
    }

    // Free the dynamically allocated memory
    delete[] mergedArray;

    return 0;
}

