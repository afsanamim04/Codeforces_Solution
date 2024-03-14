#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void sol()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
        ll j;  cin>>j;
        v.push_back(j);
    }
    ll sum=0,cur=0;
    for(ll i=0; i<n; i++)
    {
        if(cur<v[i])
        {
            sum+=(v[i]-cur);
        }
        cur=v[i];
    }
    cout<<sum-1<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
