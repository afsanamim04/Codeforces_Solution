#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v1,v2;
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v1.push_back(j);
    }
    for(ll i=0; i<m; ++i)
    {
        ll j;
        cin>>j;
        v2.push_back(j);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(),greater<int>());
    ll sum=0;
    ll i=0,j=m-1;
    ll p=0,q=n-1;
    while(p<=q)
    {

       // while(i<=j)
       // {
            if(abs(v1[p]-v2[i]) > abs(v1[q]-v2[j]))
            {
            sum+=abs(v1[p]-v2[i]);
                i++;
                p++;        //cout<<sum<<nl;
              //  break;
            }
            else
            {
                sum+=abs(v1[q]-v2[j]);
                j--;
                q-- ;           //cout<<sum<<nl;
              //  break;
            }

       // }
    }
    cout<<sum<<nl;
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
