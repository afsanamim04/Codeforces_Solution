#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; ++i)
    {
        int x; cin>>x;
        mp[x]++;
    }
    int mc = 0;
    for (const auto& pair : mp) {
        mc = max(mc, pair.second);
    }
   // cout<<mc<<nl;
    int ans=mp.size()-1;
    //cout<<ans<<nl;
    if(ans>=mc)
    {
        cout<<mc<<nl;
        return;
    }
    if(mc>ans)
    {
        if(mc-ans>1) cout<<ans+1<<nl;
        else cout<<ans<<nl;
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        sol();
    }
}
