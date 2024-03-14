#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n; cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    ll flg=0;
    ll m = min_element(v.begin(), v.end()) - v.begin();
    for(ll i=m; i<n-1; ++i)
    {
        if(v[i]>v[i+1])
        {flg++;
        break;
        }
    }
    if(flg==0) cout<<m<<nl;
    else cout<<-1<<nl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
