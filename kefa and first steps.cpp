#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v,v1;
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    ll cnt=1;
    for(ll i=0; i<n-1; ++i)
    {
        if(v[i]<=v[i+1]) ++cnt;//nn
        else
        {
            v1.push_back(cnt);
            cnt=1;
        }
    }
    v1.push_back(cnt);
    cout<< *max_element(v1.begin(),v1.end())<<nl;
    return 0;
}
