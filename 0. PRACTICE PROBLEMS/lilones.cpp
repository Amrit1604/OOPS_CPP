#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int original = x, reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return original == reversed;
}

int main() {
    int x;
    cin >> x;
    cout << (isPalindrome(x) ? "true" : "false");
    return 0;
}

