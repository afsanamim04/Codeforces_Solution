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
  int m = n - 1, p;
  for( int i = 0; i < 31; ++i ){
    if( m & 1 )
        p = i;
    m = m >> 1;
    if( m == 0) break;
  }
  int ans = pow(2, p);
  for( int i = 1; i < ans; ++i ){
    cout << i << ' ';
  }
  cout << 0 << ' ';
  for( int i = ans; i <= n-1; ++i ){
    cout << i << ' ';
  }
   cout << nl;
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

