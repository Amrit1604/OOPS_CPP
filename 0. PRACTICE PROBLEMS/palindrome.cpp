#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Function to check if a word is a palindrome
bool isPalindrome(string word) {
    int start = 0, end = word.length() - 1;

    // Check characters from both ends
    while (start < end) {
        // Ignore non-alphabetic characters and convert to lowercase
        while (start < end && !isalpha(word[start])) start++;
        while (start < end && !isalpha(word[end])) end--;
        
        if (tolower(word[start]) != tolower(word[end])) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }
    return true; // It's a palindrome
}

// Function to count palindromic words in a sentence
int countPalindromeWords(string str) {
    int count = 0;
    stringstream ss(str);
    string word;

    while (ss >> word) { // Split sentence into words
        if (isPalindrome(word)) {
            count++;
        }
    }
    return count;
}

// Main function
int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input); // Read the entire line including spaces

    int palindromeCount = countPalindromeWords(input);
    cout << "Number of palindrome words: " << palindromeCount << endl;

    return 0;
}

