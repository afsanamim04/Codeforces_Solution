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
    int n, m;
    cin >> n >> m;
    map < string, string > mpn;
     string s1, s2;
   // map < string, string > mpm;
    for( int i = 0; i < n; ++i ){
        cin >> s1 >> s2;
        mpn[s2] = s1;
    }
    for( int i = 0; i < m; ++i ){
        string s, s3;
        cin >> s >> s3;
        cout << s << ' ' << s3 << ' ' << "#";
        s3.pop_back();
        cout << mpn[s3] << nl;
    }
    return 0;
}

