#include <iostream>
#include <string>
#include <map>

int main() {
    std::string str;

    // Input string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Count frequency of every character
    std::map<char, int> charCount;
    for (char ch : str) {
        // Increment the count for the current character
        charCount[ch]++;
    }

    // Output the result
    std::cout << "Character frequencies in the string:" << std::endl;
    for (const auto& pair : charCount) {
        std::cout << "'" << pair.first << "': " << pair.second << " times" << std::endl;
    }

    return 0;
}
