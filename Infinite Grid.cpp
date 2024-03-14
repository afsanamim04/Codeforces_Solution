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
        ll x=sqrt(n);
        ll y=n/x;
        ll an=(x*2)+(y*2);
        ll ans= an;
        if(n%x==0) cout<<ans<<nl;
        else{
        //ll p=n%x;
        cout<<ans+2<<nl;
        }
    }
}
