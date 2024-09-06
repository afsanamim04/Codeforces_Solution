#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n, x;
    cin >> n >> x;
    vector < ll > v(n), pre(n+1);
    for( ll i = 0; i < n; ++i )
    {
        cin >> v[i];
    }
    sort(all(v));
    pre[0] = 0;
    for( ll i = 1; i <= n; ++i )
        pre[i] = pre[i-1] + v[i-1];
       // for( auto it : pre)
    ll ans = 0;
    for( int i = 1; i <= n; ++i )
    {
        ll l = 1, r = x;
        ll p = 0 ;
        while( l <= r)
        {
            ll mid = ( l + r ) / 2;
            ll q = mid - 1;
            if(( pre[i] + (q * i)) <= x)
            {
                p = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        //cout << p << nl;
        ans += p;
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}

