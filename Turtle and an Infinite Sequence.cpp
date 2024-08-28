#include <iostream>
using namespace std;

// Function to find the value of a_n after m seconds
int computeValue(int n, int m) {
    // If no time has passed, return the initial value
    if (m == 0) return n;

    // If m > 0, the result after enough time can be derived from the bitwise OR pattern
    int result = n;
    int mask = 1;

    // Compute the result by OR-ing all bits up to the highest bit in n
    while (mask <= n) {
        result |= mask;
        mask <<= 1;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << computeValue(n, m) << endl;
    }
    return 0;
}
