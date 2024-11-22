#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to beautify the vector
void beautify(vector<string>& vec) {
    // Insert "#" at the start and between elements
    for (size_t i = 0; i < vec.size(); i += 2) {
        vec.insert(vec.begin() + i, "#");
    }
    // Add "#" at the end
    vec.push_back("#");
}

int main() {
    int N;
    cin >> N; // Read the number of strings

    vector<string> v;
    string input;

    // Read N strings into the vector
    for (int i = 0; i < N; ++i) {
        cin >> input;
        v.push_back(input);
    }

    // Beautify the vector
    beautify(v);

    // Print the modified vector
    for (const string& str : v) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}

