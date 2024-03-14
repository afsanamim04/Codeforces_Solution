#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll sum=0;
    sum+=b;
    for(ll i=0; i<n; i++)
    {
        ll j; cin>>j;
        if(j>=a)
        sum+=(a-1);
        else sum+=j;
    }
    cout<<sum<<nl;
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
