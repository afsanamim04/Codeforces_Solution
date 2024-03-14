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
    ll ar[m+5];
    ar[0]=1;
    for(ll i=1; i<=m; i++) cin>>ar[i];
    ll x=0;
    //for(ll i=0; i<=m; i++) cout<<ar[i]<<' ';
    for(ll i=0; i<m; i++)
    {
        if(ar[i]<=ar[i+1])
        {
             x=x+(ar[i+1]-ar[i]);
        }
        else
        {
            x=x+(n-ar[i]+ar[i+1]);
        }
    }
    cout<<x<<nl;
    return 0;
}
