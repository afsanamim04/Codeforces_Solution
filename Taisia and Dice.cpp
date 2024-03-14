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
        ll n,s,r; cin>>n>>s>>r;
        vector<ll>v(n+5);
        ll x=(s-r);
        cout<<x<<' ';
        n--;
        for(ll i=0; i<n; i++)
        {
            v[i]=1;
        }
        r=r-n;
        ll j=0;
         for(ll i=1; i<=r; i++)
         {
            if(v[j]!=x)
            {
                v[j]++;
            }
            else
            {
                j++;
                v[j]++;
            }
         }
        for(ll i=0; i<n; ++i)
        {
            cout<<v[i]<<' ';
        }
        cout<<nl;
    }
}
