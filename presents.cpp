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
    vector<ll>v1,v2,v3;
    for(ll i=0; i<n; ++i)
    {
       ll j;
       cin>>j;
       v1.push_back(j);
       v2.push_back(j);
    }
    sort(v2.begin(),v2.end());
    for(ll i=0; i<n; ++i)
    {
        for(ll j=0; j<n; ++j)
        {
            if(v2[i]==v1[j])
            {
                v3.push_back(j);
            }
        }
    }
    for(auto it:v3) cout<<it+1<<' ';
    cout<<nl;
    return 0;
}
