// In The Name of Allah
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
  ll n, m, q;
  cin >> n >> m >> q;
  vector<ll > v;
  for( int i = 0; i < m; ++ i ){
    ll x;
    cin >> x;
    v.pb( x );
  }
  sort(all(v));
  while(q--){
  ll d;
  cin >> d;
  ll lo = lower_bound(v.begin(), v.end(), d) - v.begin();
 // cout << lo << nl;
  if( lo == 0 ){
    cout << v[0] - 1 << nl;
  }
  else if( lo == m ){
    cout << n - v[m-1] << nl;
  }
  else
  {
      cout << (v[lo]+v[lo-1])/2 - v[lo-1] << nl;
  }
  }
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



