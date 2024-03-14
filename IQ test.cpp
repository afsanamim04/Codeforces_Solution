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
    vector<ll>v,v1,v2;
    for(ll i=0; i<n; i++)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    for(ll i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            v1.push_back(i+1);
        }
        else
        {
            v2.push_back(i+1);
        }
    }
    if(v1.size()==1) cout<<v1[0]<<nl;
    if(v2.size()==1) cout<<v2[0]<<nl;

}
