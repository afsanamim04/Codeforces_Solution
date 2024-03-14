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
   // vector<ll>v;
    ll sum=0;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        sum+=j;
    }
    ll p=sqrt(sum);
    if(p*p==sum) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        sol();
    }
}
