#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    ll p = v[0];
    if (p == 1) {
        cout << "YES" << nl;
        return;
    }

    vector<ll> b;
    for (int i = 1; i < n; ++i) {
        if (v[i] % p != 0) {
            b.pb(v[i]);
        }
    }

    if (b.empty()) {
        cout << "YES" << nl;
        return;
    }

    sort(b.begin(), b.end());
    ll x = b[0];
    for (int i = 1; i < b.size(); ++i) {
        if (b[i] % x != 0) {
            cout << "NO" << nl;
            return;
        }
    }

    cout << "YES" << nl;
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
