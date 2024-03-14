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
    ll a,b;
    cin>>a>>b;
    if(a==b)
        cout<<0<<nl;
    else if(a<b)
    {
        ll x=b-a;
        if(x%2!=0)
            cout<<1<<nl;
        else
            cout<<2<<nl;
    }
    else
    {
        ll x=b-a;
        if(x%2==0)
            cout<<1<<nl;
        else
            cout<<2<<nl;
    }
}
}
