#include <iostream>
#include <string>
using namespace std;

void findAllSubstrings(const string& str) {
    int length = str.length();

    // Iterate through each character
    for (int start = 0; start < length; ++start) {
        string substring = "";
        // Consider all substrings starting from the current character
        for (int end = start; end < length; ++end) {
            // Append the next character to the substring
            substring += str[end];
            // Print or store the substring as required
            cout << substring << endl;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "All substrings of the string are:" << endl;
    findAllSubstrings(str);

    return 0;
}
