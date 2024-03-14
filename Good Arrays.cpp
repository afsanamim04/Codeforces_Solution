#include<bits/stdc++.h>
#define ll long long int
#define nl endl
#define pb push_back
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v;
        for(ll i=0; i<n; ++i)
        {
            ll j; cin>>j;
            v.pb(j);
        }
        if(n==1) cout<<"NO"<<nl;
        else{
        ll sum=0,cnt=0;
        for(ll i=0; i<n; ++i)
        {
            sum+=v[i];
            if(v[i]==1)
            {
                cnt++;
            }
        }
        ll flg=sum-cnt;
        ll p=flg-cnt;
        if(p>=(n-cnt))
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
        }
    }
}
