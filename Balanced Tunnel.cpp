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
    int n;
    cin >> n;

    vector<int>v1(n),v2(n);
    for( int i = 0; i < n; ++i ) cin >> v1[i];
    for( int i = 0; i < n; ++i ) cin >> v2[i];

    map<int,int>mp;

    int i = 0, j = 0, cnt = 0;
    while( i < n )
    {
        if(mp[v1[i]]==1){
                i++;
                continue;
        }
        if( v1[i] != v2[j] ){
            mp[v2[j]]=1;
            cnt++;
            j++;
        }
        else{
            i++;
            j++;
            continue;
        }
    }
    cout << cnt << nl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ll t;
    //cin >> t;
    //while (t--)
    {
        sol();
    }
    return 0;
}



