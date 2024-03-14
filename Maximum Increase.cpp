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
    vector<ll>v1,v2;
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v1.push_back(j);
    }
    if(n==1)
    {
        cout<<1<<nl;
        return ;
    }
    ll cnt=0;
    for(ll i=0; i<n-1; ++i)
    {
        if(v1[i]<v1[i+1]) cnt++;
        else
        {
            cnt++;
            v2.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt!=0)
    {
        cnt++;
        v2.push_back(cnt);
    }
    cout<<*max_element(v2.begin(),v2.end())<<nl;
}
int main()
{
    sol();
}
