#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol() {
  int n;
  cin >> n;
  string s,t,a,b, ans;
  cin >> s;
  for ( int i = 0; i < n; ++i ){
    if(s[i]=='0')
        a += s[i];
        else break;
  }
  reverse(s.begin(),s.end());
  for ( int i = 0; i < n; ++i ){
    if(s[i]=='1')
        b += s[i];
        else break;
  }
  ans = a+b;
  if( ans.size() == n)
    cout << ans << nl;
  else {
    ans.clear();
    ans += a;
    ans += '0';
    ans += b;
    cout << ans << nl;
  }
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
