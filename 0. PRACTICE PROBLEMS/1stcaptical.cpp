#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string capitalizeTitle(string title) {
    string result = "";
    for (int i = 0; i < title.length(); i++) {
        string word = "";
        while (i < title.length() && title[i] != ' ') {
            word += title[i];
            i++;
        }
        if (word.length() <= 2) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
        } else {
            transform(word.begin(), word.begin() + 1, word.begin(), ::toupper);
            transform(word.begin() + 1, word.end(), word.begin() + 1, ::tolower);
        }
        result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string inputTitle;
    getline(cin, inputTitle);
    string outputTitle = capitalizeTitle(inputTitle);
    cout << outputTitle << endl;
    return 0;
}





