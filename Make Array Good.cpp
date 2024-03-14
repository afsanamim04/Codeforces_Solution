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
    vector<ll>v;
    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        ll x; cin>>x;
        v.push_back(x);
    }
    ll p=*max_element(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i]==p) cnt++;
    }
    cout<<n-cnt<<nl;
    for(int i=0; i<n; i++)
    {
       if(v[i]==p) continue;
       else{
        cout<<i+1<<' '<<p-v[i]<<nl;
       }
    }
   // cout<<nl;
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
