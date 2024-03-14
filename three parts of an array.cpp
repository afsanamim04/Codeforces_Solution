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
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    ll l=0, r=n-1;
    ll sum1=0,sum3=0,result=0;
    while(l<=r)
    {
        if(sum1<sum3)
        {
            sum1+=v[l];
            l++;
        }
        else
        {
            sum3+=v[r];
            r--;
        }
        if(sum1==sum3)
        {
            result=sum1;
        }
    }
    cout<<result<<nl;
}
