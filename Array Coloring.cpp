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
        vector<ll>v(n+5);
        for(ll i=0; i<n; i++) cin>>v[i];
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            if((v[i]%2)==1)
                cnt++;
        }
        if(cnt%2==0)
            cout<<"YES"<<nl;
        else
        cout<<"NO"<<nl;
    }
}
