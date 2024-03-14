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
        for(ll i=0; i<n; ++i)
        {
            ll j; cin>>j;
            v1.push_back(j);
        }
        ll cnt=0;
        for(ll i=0; i<n; ++i)
        {
            if(v1[i]==1)
            {
                v2.push_back(cnt);
                cnt=0;
            }
            else
                cnt++;
        }
        v2.push_back(cnt);
        //for(auto it:v2) cout<<it<<' ';
        cout<<*max_element(v2.begin(),v2.end())<<nl;
    }
}
