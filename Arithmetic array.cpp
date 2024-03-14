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
        vector<ll>v;
        for(ll i=0; i<n; ++i)
        {
            ll j; cin>>j;
            v.push_back(j);
        }
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
          sum=sum+v[i];
        }
        if(sum>0)
        {
        if(sum>=n)
        cout<<sum-n<<nl;
        else
            cout<<'1'<<nl;
        }
        else
            cout<<'1'<<nl;
    }
}
