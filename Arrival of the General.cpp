#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n; cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    ll x=*max_element(v.begin(),v.end());
    ll y=*min_element(v.begin(),v.end());
    ll a,b;
    for(ll i=0; i<n; i++)
    {
        if(v[i]==x)
        {a=i+1;
        break;
        }
    }
    for(ll i=n-1; i>=0; i--)
    {
        if(v[i]==y)
        {b=i+1;
        break;
        }
    }
    if(a<b)
    {
        cout<<(a-1)+(n-b)<<nl;
    }
    else cout<<(a-1)+(n-b)-1<<nl;
}
