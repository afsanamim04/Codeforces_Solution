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
    ll n, k;
    cin >> n >> k;
    if( k == 1){
        cout << n << nl;
        return;
    }
    int temp, cnt = 0;
    for( int i = 0; i < 61; ++i )
    {
        if( n & 1 )
        {
            temp = i;
        }
        n = n >> 1;
        if( n == 0 )
            break;
    }
    //cout << temp << nl;
    ll ans =  pow( 2, (temp+1))  ;
    cout << ans - 1 << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sol();

    return 0;
}

