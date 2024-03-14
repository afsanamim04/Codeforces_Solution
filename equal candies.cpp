#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
    ll n; cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    ll x=*min_element(v.begin(),v.end());
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        sum=sum+(v[i]-x);
    }
    cout<<sum<<nl;
    }

}
