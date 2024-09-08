#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
ll cal( ll n ){
    return (n*(n-1))/2;
}

void sol(){
    ll n, m, k;
    cin >> n >> m >> k;
    if( m < n-1 || m > cal ( n ) ){
        cout << "NO" << nl;
        return;
    }
    ll ans = 0;
    if( n == 1 )
        ans = 0;
    else if (n == 2 || m == cal(n))
        ans = 1;
    else ans = 2;

    if( ans < ( k - 1))
        cout << "YES" << nl;
    else cout << "NO" << nl;
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

