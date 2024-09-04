#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol() {
    int n, k;
    cin >> n >> k;
    int l = k, r = n + k - 1, m, res = INT_MAX, x = n + k - 1;
    while (l <= r) {
        m = (l + r) / 2;
        int a = ((m * (m + 1)) / 2) - ((k * (k - 1)) / 2);
        int b = ((x * (x + 1)) / 2) - ((m * (m + 1)) / 2);
        if (a <= b) {
            l = m + 1;
            res = min(res, abs(b - a));
        } else {
            r = m - 1;
            res = min(res, abs(a - b));
        }
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}
