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
    int num;
    cin >> num;
    int p = 0, n = 0, z = 0;
    vector<ll>v;
    for( int i = 0; i < num; ++i )
    {
        ll x;
        cin >> x;
        v.pb(x);
        if( x > 0 ) p++;
        else if( x < 0 ) n++;
        else z++;
    }
    sort(all(v));
    int a = 0;
    for( int i = 0; i < num; ++i )
    {
        if( v[i] > 0 )
        {
            a = i;
            break;
        }
    }
    //cout << p << nl;
    //cout << a << nl;
    //cout << abs(v[1] - v[0])<< ' ' << v[a] << nl;
    if(z > 1)
    {
        z = z;
        p = 0;
        cout << n + p + z << nl;
        return;
    }
    if( n == 0 ){
        if( p != 0 )
            p = 1;
        cout << n+p+z << nl;
        return;
    }
    if( num == 1 )
    {
        cout << 1 << nl;
        return;
    }
    if( p == 0 )
    {
        cout << n + p + z << nl;
        return;
    }
    for( int i = 0; i < a; ++i )
    {
        ll q =  abs(v[i+1] - v[i]);
        if((q >= v[a]))
        {
            p = 1;
        }
        else
        {
            p = 0;
            break;
        }
    }

    //cout << n << ' ' << p << ' ' << z << nl;
    cout << n + p + z << nl;
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



