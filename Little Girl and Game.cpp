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
  string s;
  cin >> s;
  map < char, int> mp;
  for( int i = 0; i < s.size(); ++i ){
    mp[s[i]]++;
  }
  int cnt = 0;
  for( auto it : mp ){
    if( it.second % 2 )
        cnt++;
  }
  if( cnt == 0 || cnt % 2 ){
    cout << "First" << nl;
  }
  else  cout << "Second" << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}

