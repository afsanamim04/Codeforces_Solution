#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll x,y,n; cin>>x>>y>>n;
        ll sum=0;
        for(ll i=1; i<n; ++i)
        {
          sum+=i;
        }
        if(sum >(y-x))
            cout<<-1<<nl;
        else
        { vector<ll>v;
        v.push_back(y);
            cout<<x<<' ';

            for(ll i=1; i<=(n-2); ++i)
            {
                y-=i;
               v.push_back(y);

            }
            sort(v.begin(),v.end());
            for(auto it:v) cout<<it<<" ";

            cout<<nl;
        }
        //cout<<nl;
    }
}
