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
    int t;
    cin >> t;
    ll E = 0, W = 0, N = 0, S = 0;
    ll sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    if( sx <= ex ) E = ex - sx;
    if( sx >= ex ) W = sx - ex;
    if( sy <= ey ) N = ey - sy;
    if( sy >= ey ) S = sy - ey;

    //cout << E << ' ' << W << ' ' << N << ' ' << S << nl;
    ll i = 0;
    if( E <= 0 && W <= 0 && N <= 0 && S <= 0 )
    {
        cout << 0 << nl;
        return;
    }
    while(i < s.size())
    {


        if( s[i] == 'W' ) W--;
        else if( s[i] == 'E' ) E--;
        else if( s[i] == 'N' ) N--;
        else if( s[i] == 'S' ) S--;
        if( E <= 0 && W <= 0 && N <= 0 && S <= 0 )
        {
            cout << i+1 << nl;
            return;
        }
        i++;

    }
    cout << -1 << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ll t;
    // cin >> t;
    // while (t--)
    {
        sol();
    }
    // return 0;
}



