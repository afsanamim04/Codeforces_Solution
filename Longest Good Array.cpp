#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

ll cal( ll mid ){
    ll ans = ( mid * (mid + 1) ) / 2;
    return ans;
}

void sol()
{
   ll l , r;
   cin >> l >> r;
   ll ans = r - l;
   ll f = -1;
   ll lo = 0, hi = (r - l) + 1 ;
   while ( lo <= hi ){
    ll mid = ( lo + hi ) / 2;
    if( ans >= cal(mid)){
        f = mid;
        lo = mid + 1;
    }
    else if( ans < cal(mid)){
        hi = mid - 1;
    }
   }
   cout << f+1 << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while( t-- )
    {
       sol();
    }
    return 0;
}
