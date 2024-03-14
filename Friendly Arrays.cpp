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
        ll n,m;
        cin>>n>>m;
        vector<ll>v,v1,v2;
        for(ll i=0; i<n; i++)
        {
            ll j; cin>>j;
            v1.push_back(j);
        }
        for(ll i=0; i<m; i++)
        {
            ll j; cin>>j;
            v2.push_back(j);
        }
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            sum^=v1[i];
        }
        v.push_back(sum);
        ll x=*min_element(v2.begin(),v2.end());
        ll y=*max_element(v2.begin(),v2.end());
          ll sum1=0;
            for(ll j=0; j<n; j++)
            {
                sum1^=(v1[j]|x);
            }
            v.push_back(sum1);
            ll sum2=0;
            for(ll j=0; j<n; j++)
            {
                sum2^=(v1[j]|y);
            }
        v.push_back(sum2);
        cout<<*min_element(v.begin(),v.end())<<' '<<*max_element(v.begin(),v.end())<<nl;
    }
}
