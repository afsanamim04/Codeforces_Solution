#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n; cin>>n;
    vector<ll>v;
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        ll j; cin>>j;
        v.push_back(j);
        sum+=j;
    }
    ll avg= sum/n;
    ll p=0,flg=0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]> avg)
            p+=v[i]- avg;
        else
            p-=avg-v[i];
        if(p<0)
        {
            flg=1;
            break;
        }
    }
   // cout<<sum<<nl;
    if(flg==0)
    {
        cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
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
