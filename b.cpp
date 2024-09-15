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
  ll a, b;
  cin >> a >> b;
  if( a > b )
    swap ( a, b);
  ll d;
  cin >> d;
  ll ans = 0;
  if( a < d && d < b ){
        ans = (a+b)/2 - a;
  }
  else if( d < a){
    ans = a - 1;
  }
  else {
    ans = n - b;
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



