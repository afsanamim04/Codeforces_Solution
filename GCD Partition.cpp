#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n;
    cin>>n;
    vector<ll>v(n+5),pre(n);
    for(int i=0; i<n; i++) cin>>v[i];
    ll sum=0;
    pre[0]=v[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
   // for(auto it: pre) cout<<it<<' ';
    sum=pre[n-1];
    ll ans=0;
    for(int i=0; i<n-1; i++)
    {
        ans=max(ans,(__gcd(pre[i],sum-pre[i])));
    }
    cout<<ans<<nl;

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
