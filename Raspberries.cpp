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
    int n, k;
    cin >> n >> k;
    vector < int > v(n+5);
    for ( int i = 0; i < n; ++i )
    {
        cin >> v[i];
    }
    if( k != 4){
        int cnt = 0;
        for( int i = 0; i < n; ++i ){
            if( v[i] % k == 0 ){
                cout << 0 << nl;
                return;
            }
            else
                cnt = max( cnt,v[i] % k );
        }
        cout << k - cnt << nl;
    }
    else{
        int odd = 0,even = 0, cnt = 0;;
        for( int i = 0; i < n; ++i ){
            if( v[i] % k == 0 ){
                cout << 0 << nl;
                return;
            }
            else {
                if( v[i] % 2 ) odd++;
                else even++;
            }
            cnt = max( cnt,v[i] % k );

        }
        if( even >= 2) cout << min(0, k-cnt) << nl;
        else if( even >= 1 && odd >= 1) cout << min(1, k-cnt) << nl;
        else if( odd >= 2 || even == 1 ) cout << min(2, k-cnt) << nl;
        else cout << min(3, k - cnt) << nl;

    }
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

