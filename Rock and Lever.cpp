#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
  int n;
  cin >> n;
  vector < ll> v(n+5);
  for( int i = 0; i < n; ++i ) cin >> v[i];
  map < int, int > mp;
  for ( int i = 0; i < n; ++i ){
        int p = -1;
    for( int j = 0; j < 62; ++j ){
        if(v[i] & 1){
        p = j;
        }
        v[i] = ( v[i] >> 1);
        if (v[i] == 0) break;
    }
    if( p != -1 )
      mp[p]++;
  }
  ll ans = 0;
  //for( auto it : mp ) cout << it.first << ' ' << it.second << nl;
  for( auto it: mp ){
   ans += (static_cast<ll>(it.second) * (it.second - 1)) / 2;
  }
  cout << ans << nl;
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

