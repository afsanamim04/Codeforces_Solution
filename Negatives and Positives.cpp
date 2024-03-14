#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll sum=0,cnt=0;
    for(ll i=0; i<n; i++)
    {
        ll j;
        cin>>j;
        v.push_back(abs(j));
        sum+=abs(j);
        if(j<=0)
            cnt++;
    }
    if(cnt%2==0) cout<<sum<<nl;
    else
    {
      cout<<sum-2*abs(*min_element(v.begin(),v.end()))<<nl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
