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
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    ll i=0,j,p;
    if(n%2==0)
    {
        cout<<(n/2)-1<<nl;
        j=n/2;
        p=j;
    }
    else
    {
        cout<<n/2<<nl;
        j=(n/2);

        p=j;
    }
    while(j<n)
    {
        cout<<v[j]<<' ';
        j++;
        if(v[i]!=v[p])
        {
            cout<<v[i]<<' ';
            i++;
        }
    }
}
int main()
{
   sol();
}
