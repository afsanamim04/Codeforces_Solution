#include <bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, w;
        cin >> n >> w;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll j;
            cin >> j;
            v.push_back(j);
        }
        sort(v.begin(), v.end());
        ll l = 0, r = 2000000000 + 5;
        ll p = 0;
        while (l < r)
        {
            ll mid = l+( r-l+1) / 2;
            ll ans = 0;
            for (ll i = 0; i < n; i++)
            {
                ans += max(mid - v[i], 0LL);
            }
            if (ans <=w)
            {
                l = mid ;
            }
            else
            {
                r = mid-1;
            }
        }

        cout<<l<<endl;
    }
    return 0;
}
