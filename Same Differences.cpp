#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n; cin>>n;
    map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
       int x;
       cin>>x;
       x-=i;
       mp[x]++;
    }
    ll ans=0;
    for(auto it: mp)
    {
        ll a=it.second;
        ans+=(a*(a-1))/2;
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
