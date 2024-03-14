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
    vector<pair<ll,ll>>v;
    for(ll i=0; i<n; ++i)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    ll cnt=0;
    for(ll i=0; i<n; ++i)
    {
        for(ll j=0; j<n; j++)
        {
            if(i!=j)
            {
                 if(v[i].second==v[j].first )
                 {
                    // swap(v[j].first,v[j].second);
                     cnt++;
                 }
            }


        }
    }
    cout<<cnt<<nl;
}
