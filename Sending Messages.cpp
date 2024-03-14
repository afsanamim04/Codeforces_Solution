#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v;
    v.push_back(0);
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    int cnt=0;
    for(ll i=0; i<n; ++i)
    {
        ll p=min((v[i+1]-v[i])*a,b);
        f-=p;
        if(f<0) {cnt=1; break;}
        else if(f==0) {cnt=1; break;}
    }
    if(cnt==0) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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
