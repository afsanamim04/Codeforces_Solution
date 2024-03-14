#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,x,y;
    cin>>n;
    set<ll>s1,s2;
    vector<ll>v;
    cin>>x;
    for(ll i=0; i<x; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    cin>>y;
    for(ll i=x; i<(x+y); ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    for(ll i=0; i<(x+y); ++i)
    {
        s2.insert(v[i]);
    }
    for(ll i=1; i<=n; ++i)
    {
        s1.insert(i);
    }
    if(s1==s2)
        cout<<"I become the guy."<<nl;
    else
        cout<<"Oh, my keyboard!"<<nl;
    return 0;

}
