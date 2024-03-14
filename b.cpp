#include <iostream>
#include <vector>
#include <algorithm>

// Custom sorting function
bool customSort(int a, int b) {
    // Check if a and b are even or odd
    bool isEvenA = a % 2 == 0;
    bool isEvenB = b % 2 == 0;

    // Compare based on criteria
    if (isEvenA && isEvenB) {
        // Both are even, compare normally
        return a < b;
    } else if (!isEvenA && !isEvenB) {
        // Both are odd, compare normally
        return a < b;
    } else {
        // One is even, the other is odd
        if (isEvenA) {
            // Even numbers come first
            return true;
        } else {
            // Odd numbers come next
            return false;
        }
    }
}

int main() {
    std::vector<int> myVector = {1, 1, 3, 5};

    // Sort the vector using the custom sorting function
    std::sort(myVector.begin(), myVector.end(), customSort);

    // Move duplicates to the end
    auto it = std::unique(myVector.begin(), myVector.end());
    std::sort(it, myVector.end());

    // Display the sorted vector
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
