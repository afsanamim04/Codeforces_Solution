#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        ll j;
        cin>>j;
        v.pb(j);
        sum+=j;
    }

    sort(v.begin(),v.end());
        ll i=(k*2)-1;
        ll j=n-1;
        for(int p=1; p<=k; ++p)
        {
             if((v[i]+v[i-1])>v[j])
            {
                sum=sum-v[j];
                j--;
                if(i==j)
                {
                    if(v[j]<(v[i]+v[i-1]))
                    i=i-2;
                    else j--;
                }
            }
            else
            {
                sum=sum-(v[i]+v[i-1]);
                i=i-2;
              if(i==j)
                {
                    if(v[j]<(v[i]+v[i-1]))
                    i=i-2;
                    else j--;
                }
            }
        }
        cout<<sum<<nl;

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
