#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,m; cin>>n>>m;
    ll p,q; cin>>p>>q;
    vector<ll>v1,v2;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        v1.push_back(j);
    }
    for(ll i=0; i<m; ++i)
    {
        ll j; cin>>j;
        v2.push_back(j);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),greater <ll>());
    if(v1[p-1]<v2[q-1]) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

