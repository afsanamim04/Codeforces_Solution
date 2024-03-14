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
        vector<ll>v1,v2;
        while(n--)
        {
            ll m; cin>>m;
            vector<ll>v;
            for(ll i=0; i<m; ++i)
            {
               ll j; cin>>j;
               v.push_back(j);
            }
            sort(v.begin(),v.end());
            v1.push_back(v[0]);
            v2.push_back(v[1]);
            v.clear();
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        ll sum=0;
        for(ll i=1; i<v2.size(); ++i)
        {
            sum+=v2[i];
        }
        cout<<sum+v1[0]<<nl;

    }
}
