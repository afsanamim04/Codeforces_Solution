#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

ll dis(int x1, int y1, int x2, int y2) {
    return 1ll * (x2 - x1) * (x2 - x1) + 1ll * (y2 - y1) * (y2 - y1);
}
void sol() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll d = dis(x1, y1, x2, y2);
    bool flg = false;
    for (int i = 0; i < n; ++i) {
        ll dist = dis(v[i].first, v[i].second, x2, y2);
        if (dist <= d) {
            flg = true;
            break;
        }
       /* else if (dist == d && v[i].first == y1 && v[i].second == x1) {
            flg = true;
            break;
        }*/
    }
    if (flg) cout << "NO" << nl;
    else cout << "YES" << nl;
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
