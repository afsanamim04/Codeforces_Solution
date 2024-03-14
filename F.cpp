#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll x;
    cin>>x;
    vector<ll>v,v1;
    ll sum1=0;
    for(ll i=0; i<n; i++)
    {
        ll j;
        cin>>j;
        sum1+=j;
        v.push_back(j);
    }
    if(sum1==x) cout<<n;
    else if(sum1<x) cout<<-1<<nl;
    else
    {
        for(ll i=0; i<n; i++)
        {
            ll sum=0,cnt=0;
            for(ll j=i; j<n; j++)
            {
                sum+=v[j];
                cnt++;
                if(sum>=x)
                    v1.push_back(cnt);
                if(sum>x)
                    break;
            }
        }
        cout<<*min_element(v1.begin(),v1.end())<<nl;
    }
}
