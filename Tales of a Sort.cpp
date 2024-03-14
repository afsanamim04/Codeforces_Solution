#include<bits/stdc++.h>
#define ll long long int
#define nl endl
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v1,v2;
        for(ll i=0; i<n; ++i)
        {
            ll j;
            cin>>j;
            v1.push_back(j);
            v2.push_back(j);
        }
        ll cnt=0,f=0;
        sort(v2.begin(),v2.end());
        if(v1==v2)
            cout<<0<<nl;
        else
        {
            for(ll i=n-1; i>=0; i--)
            {
                if(v2[i]!=v1[i])
                {
                    cout<<v2[i]<<nl;
                    break;
                }
            }
        }

    }
}
