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
        for(ll i=0; i<n; i++)
        {
            ll j; cin>>j;
            v1.push_back(j);
        }
        for(ll i=0; i<n; i++)
        {
            ll j; cin>>j;
            v2.push_back(j);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        //ll sum1=0,sum2=0;


            ll sum1=0;
            ll sum2=0;
            for(ll i=0; i<n; i++)
            {
                sum1+=(v2[i]+v1[0]);
            }
            for(ll i=0; i<n; i++)
            {
                sum2+=(v1[i]+v2[0]);
            }
            cout<<min(sum1,sum2)<<nl;

    }
}
