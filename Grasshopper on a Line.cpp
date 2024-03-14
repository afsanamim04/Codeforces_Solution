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
        ll x,k; cin>>x>>k;
        ll y=x;
        if(x%k!=0) cout<<1<<nl<<x<<nl;
        else
        {
           while(1)
        {
           x--;
           if(x%k!=0)
           {
               cout<<2<<nl<<x<<' '<<y-x<<nl;
               break;
           }
        }
        }

    }
}
