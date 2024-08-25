#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector < pair < string, string> > v(n+5);
    for( int i = 0; i < n; ++i )
    {
        cin >> v[i].first >> v[i].second;
    }
    sort( v.begin(), v.end() );
    int u = unique( v.begin(), v.end() ) - v.begin() ;
    cout << u-1 << nl;


    return 0;
}

