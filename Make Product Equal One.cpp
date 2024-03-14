#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb    push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v,v1,v2,v3;
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v.pb(j);
    }
    sort(v.begin(),v.end());
    ll cnt=0,flg=0,l=0;
    for(ll i=0; i<n; ++i)
    {
        if(v[i]<0)
        {
            v1.pb(v[i]);
            cnt++;
        }

        else if(v[i]==0)
        {
            v2.pb(v[i]);
            flg++;
        }

        else
        {
            v3.pb(v[i]);
            l++;
        }

    }



        ll ans=0;
        if(cnt%2==0)
        {
            for(ll j=0; j<cnt; j++)
            {
                if(v1[j]!=-1)
                ans=ans+abs(v[j]+1);
            }
            ans+=flg;
        }
         else
        {
            if(flg==0)
            {
                for(ll j=0; j<cnt; j++)
                {
                    ans=ans+abs(v1[j]+1);
                }
                ans+=2;
            }
            else
            {
                for(ll j=0; j<cnt; j++)
                {
                    ans=ans+abs(v1[j]+1);
                }
                ans+=flg;
            }
        }
        for(ll j=0; j<l; j++)
        {
            if(v3[j]!=1)
            ans=ans+abs(v3[j]-1);
        }

    cout<<ans<<nl;
}
