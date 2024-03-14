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
        vector<ll>a,b;
        for(ll i=0; i<n; ++i)
        {
            ll j; cin>>j;
            a.push_back(j);
        }
        for(ll i=0; i<n; ++i)
        {
            ll j; cin>>j;
            b.push_back(j);
        }
        ll flg=0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]>b[i])
                swap(a[i],b[i]);
            ll x=*max_element(a.begin(),a.end());
            ll y=*max_element(b.begin(),b.end());

             if(a[n-1]==x && b[n-1]==y) flg++;
        }

        if(flg!=0)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    return 0;
}
