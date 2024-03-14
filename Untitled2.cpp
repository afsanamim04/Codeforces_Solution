#include <iostream>
#include <climits>
using namespace std;

const int COINS[] = {1, 3, 6, 10, 15};

int minCoins(int n) {
    if (n <= 0) return 0;

    int minCount = INT_MAX;
    for (int coin : COINS) {
        if (n >= coin) {
            int count = minCoins(n - coin);
            if (count != INT_MAX) {
                minCount = min(minCount, count + 1);
            }
        }
    }
    return minCount;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << minCoins(n) << endl;
    }
    return 0;
}
