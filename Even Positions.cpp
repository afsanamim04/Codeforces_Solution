#include <bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector < int > v;
    ll ans = 0;

    for ( int i = 0; i < n; ++i ){
       if ( v.empty() || s[i] == '(' ){
            v.pb(i);
           }
           else{
            ans += ( i - v.back() );
            v.pop_back();
           }
    }

    cout << ans << nl;
}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}
