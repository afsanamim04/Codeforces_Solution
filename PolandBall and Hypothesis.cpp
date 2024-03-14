#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n; cin>>n;
    for(ll i=1; i<=1000; i++)
    {
        ll flg=0;
        ll x=(n*i)+1;
        for(ll j=2 ; j<x; j++)
        {
           if(x%j==0)
           {
               flg++;
           }
        }
        if(flg!=0)
        {
            cout<<i<<nl;
            break;
        }

    }
}
