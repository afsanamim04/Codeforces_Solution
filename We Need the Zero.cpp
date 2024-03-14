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
        vector<ll>v(1000+5);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll sum=0,x,flag=0;
        for(ll i=0; i<=256; i++)
        {
            sum=v[0]^i;
            for(ll j=1; j<n; j++)
            {
                sum^=(v[j]^i);
            }
            if(sum==0)
            {
                x=i;
                flag=1;
                break;
            }

        }
        if(flag==1)
           cout<<x<<nl;
        else
            cout<<-1<<nl;

    }
}
