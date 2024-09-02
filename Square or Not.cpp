#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int n ;
    cin >> n;
    string s;
    cin >> s;
    int p = sqrt(n);
    //cout << p << nl;
    if( (p*p) != n ){
        cout << "NO" << nl;
        return;
    }
    string a, b, ans;
    for( int i = 0; i < p; ++i ){
        a += '1';
    }
    b += '1';
    for( int i = 0; i < p-2; ++i ){
        b += '0';
    }
    b += '1';
    ans += a;
    for( int i = 0; i < p-2; ++i ){
        ans += b;
    }
    ans += a;
    //cout << a<< nl << b << nl << ans << nl;
    if( ans == s ) cout << "YES" << nl;
    else cout << "NO" << nl;
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

