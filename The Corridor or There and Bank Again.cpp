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
        while(n--)
        {
            ll a,b; cin>>a>>b;
            if(b%2==0)
            {
                v.push_back(a+(b/2)-1);
            }
            else
            {
                v.push_back(a+(b/2));
            }
        }
        ll x=*min_element(v.begin(),v.end());
        cout<<x<<nl;
    }
}
