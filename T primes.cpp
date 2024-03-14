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
    vector<ll>v(n+5);
    for(ll i=0; i<n; ++i) cin>>v[i];
    ll x,flg=0;
    for(ll i=0; i<n; i++)
    {
        flg=0;
        x=sqrt(v[i]);
        if(x*x==v[i])
        {
            if(x<2) flg++;
            else if(x==2) flg=0;
            else if(x%2==0) flg++;
            else{
            for(ll j=3; j*j<=x; j+=2)
            {
                if(x%j==0)
                    flg++;
            }
            }

        if(flg==0)
                cout<<"YES"<<nl;

            else
                cout<<"NO"<<nl;
        }
        else
            cout<<"NO"<<nl;

    }
}
