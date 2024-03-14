#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    vector<ll>v;
    for(ll i=0; i<4; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    ll cnt=0;
    for(ll i=0; i<3; ++i)
    {
        if(v[i]==v[i+1]) ++cnt;
    }
    cout<<cnt<<nl;
    return 0;
}
