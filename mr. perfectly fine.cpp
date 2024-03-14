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
        vector<ll>v1,v2,v3;
        for(ll i=0; i<n*2; ++i)
        {
            ll j; cin>>j;
            v1.push_back(j);
        }
        for(ll i=0; i<n*2; i+=2)
        {
            if(v1[i+1]==1 || v1[i+1]==10)
                v2.push_back(v1[i]);
            if(v1[i+1]==11)
                v3.push_back(v1[i]);
        }
        sort(v3.begin(),v3.end());
        sort(v2.begin(),v2.end());
        if((v2.size())!=0 && v3.size()>1)
        {
        if(v3[0]+v3[1]<v2[0])
            cout<<v3[0]+v3[1]<<nl;
        else
            cout<<v2[0]<<nl;
        }
        if((v2.size())==0)
        {
            cout<<v3[0]+v3[1]<<nl;
        }
    }
}
