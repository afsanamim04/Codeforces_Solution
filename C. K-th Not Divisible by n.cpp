#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        if(n>k) cout<<k<<nl;
        else if(n==k) cout<<n+1<<nl;
        else
        {
          ll need=ceil((k-1)/(n-1));
          cout<<k+need<<nl;
        }
    }
}
