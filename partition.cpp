#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n; cin>>n;
    vector<ll>v,v2,v3;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    for(ll i=0; i<n; ++i)
    {
        if(v[i]>=0)
            v2.push_back(v[i]);
        if(v[i]<0)
            v3.push_back(v[i]);
    }
    ll sumb=0,sumc=0;
    for(ll i=0; i<v2.size(); i++)
    {
        sumb=sumb+v2[i];
    }
    for(ll i=0; i<v3.size(); i++)
    {
        sumc=sumc+v3[i];
    }
    cout<<sumb-sumc<<nl;
}
