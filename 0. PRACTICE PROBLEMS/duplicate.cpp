#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector<int>& v) {
    vector<int> result; // To store unique elements

    for (int num : v) {
        // Check if the number is already in the result vector
        bool found = false;
        for (int unique : result) {
            if (unique == num) {
                found = true;
                break;
            }
        }
        // If not found, add it to the result vector
        if (!found) {
            result.push_back(num);
        }
    }

    // Update the original vector
    v = result;
}

int main() {
    vector<int> v = {24, 10, 12, 19, 24, 17, 12, 10, 10, 19, 26, 26};

    cout << "Original vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    removeDuplicates(v);

    cout << "After removing duplicates: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

