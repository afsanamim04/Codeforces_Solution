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
        ll a,b,c,d; cin>>a>>b;
        ll ans=0;
        //vector<ll>v;
        for(ll i=1; i<n; i++)
        {
           cin>>c>>d;
           if(a<=c && b<=d)
        {
            ans=-1;
        }
          // if(c<a)
           //v.push_back(c);

        }
        if(ans ==0)
        {
           // sort(v.begin(),v.end(),greater <ll> ());
            cout<<a<<nl;
        }

            else cout<<ans<<nl;
    }
}


