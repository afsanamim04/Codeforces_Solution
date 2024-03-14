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
        if((n/2)%2==1)
            cout<<"NO"<<nl;
        else
        {
            cout<<"YES"<<nl;
        vector<ll>v1,v2;
        ll sum1=0,sum2=0;
        for(ll i=2; i<=n; i+=2)
        {
            v1.push_back(i);
            sum1+=i;
        }

        for(ll j=1; j<n-1; j+=2)
        {
            v2.push_back(j);
            sum2+=j;
        }
        v2.push_back(sum1-sum2);
        for(ll i=0; i<n/2; i++)
        {
            cout<<v1[i]<<' ';
        }
        for(ll i=0; i<n/2; i++)
        {
            cout<<v2[i]<<' ';
        }
        cout<<nl;
        }
    }
}
