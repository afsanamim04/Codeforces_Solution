#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v,v1;
        set<ll>s;
        if(n==1)
            cout<<1<<nl;
        else
        {
            for(ll i=1; i*i<=n; ++i)
            {
                if(n%i==0)
                {
                    ll x=i;
                    ll y=n/i;
                    s.insert(x);
                    s.insert(y);
                }
            }
            ll cnt=1;
            for(auto it: s)
            {
                v.pb(it);
            }
      //  for(auto it: v) cout<<it<<' '; cout<<nl;
            for(ll i=0; i<v.size()-1; ++i)
            {
                if((v[i]+1)==v[i+1])
                {
                    cnt++;
                }
                else
                {
                    v1.pb(cnt);
                    cnt=1;
                }
            }
            cout<<*max_element(v1.begin(),v1.end())<<nl;
        }
    }
}
