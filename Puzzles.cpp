#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v,p;
    for(ll i=0; i<m; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end(),greater<ll>());
    if(m==n)
        cout<<v[0]-v[n-1]<<nl;
    else
    {
        ll j=0;
        for(ll i=0; i<(m-n+1); i++)
        {
            j=v[i]-v[i+(n-1)];
            p.push_back(j);
        }
        cout<<*min_element(p.begin(),p.end())<<nl;
    }

}
