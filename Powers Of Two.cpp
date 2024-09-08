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
    int n, k;
    cin >> n >> k;
    int m = n;
    vector < int > v, ans;
    int cnt = 0;
    for( int i = 0; i < 31; i++ )
    {
        if( n & 1 )
        {
            v.pb(pow(2,i));
            cnt ++;
        }
        n = ( n >> 1 );
        if( n == 0 )
            break;
    }
    if( (cnt > k) || (k > m) )
    {
        cout << "NO" << nl;
        return;
    }
    else
    {
        ll sum = 0;
        cout << "YES" << nl;
        sort(v.rbegin(), v.rend());
        int i = 0;
        int c = cnt;
        //cout << c << nl;
        while( c < k )
        {
            if(v[i] != 1 )
            {
                v.pb(v[i]/2);
                v[i]/=2;
                c++;
            }
            else
            {
                i++;
            }
        }
        for( auto it : v ) cout << it << ' ';
        cout << nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}

