
#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    vector<ll>v;
    for(ll i=0; i<6; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    ll sum=0;
    for(ll i=0; i<6; ++i)
    {
        sum+=v[i];
    }
    if((sum%2)!=0)
        cout<<"NO"<<nl;
    else
    {
        sort(v.begin(),v.end());
        ll x=sum/2;
        ll l,r;
        ll a=0;
        for(ll i=0; i<6; ++i)
        {
            l=i+1;
            r=6-1;
            while(l<r)
            {
                ll sum=v[i]+v[l]+v[r];
                if(sum==x)
                {
                    cout<<"YES"<<nl;
                    // cout<<"("<<v[i]<<","<<v[l]<<","<<v[r]<<") = "<<v[i]+v[l]+v[r]<<nl;
                    a=1;
                    break;
                }

                if(sum>x) r--;
                else      l++;
            }
            if(a==1)
                    break;
        }
        if(a==0) cout<<"NO"<<nl;
    }

}
