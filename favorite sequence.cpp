#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    // ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v,v2;
        for(ll i=0; i<n; ++i)
        {
            ll j;
            cin>>j;
            v.push_back(j);
        }
        ll i=0, j=n-1;
        while(i<=j)
        {
            if(i==j)
            {
                v2.push_back(v[j]);
            }
            else
            {
                v2.push_back(v[i]);
                v2.push_back(v[j]);
            }
            i++;
            j--;

        }
        for(auto it: v2) cout<<it<<" ";
        cout<<nl;
    }
    return 0;
}
