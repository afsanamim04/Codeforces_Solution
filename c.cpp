
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
    vector<ll>n;
    for(ll i=0; i<n; i++)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v,end());
    for(ll i=0; i<v[n-1]; i++)
    {
        if((i+1)!=v[i])
            cout<<i+1<<nl;
    }
}
