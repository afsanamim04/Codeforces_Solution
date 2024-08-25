#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol() {
    string a, b;
    cin >> a >> b;
    int l = a.size(), m = b.size(), p = 0;

    for (int i = 0; i < m; ++i) {
        int cnt = 0, k = i;

        for (int j = 0; j < l; ++j) {
            if (k < m && a[j] == b[k]) {
                cnt++;
                k++;
            }
        }

        p = max(p, cnt);
    }

    cout << l + (m - p) << nl;
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
