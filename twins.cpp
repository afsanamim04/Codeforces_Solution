#include<bits/stdc++.h>
#define PI        acos(-1.0)
#define all(x)    x.begin(),x.end()
#define nl        '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n;
    vector<ll>v;
    cin>>n;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    if(n==1 ) cout<<1<<nl;
    else if(n==2 && v[0]==v[1])cout<<2<<nl;
    else{
    for(ll i=0; i<n; i++)sum=sum+v[i];
    sort(v.begin(),v.end(),greater<ll>());
    ll  i=0,x=v[0];
    ll tsum=sum;
    sum=tsum-x;
    while(x<=sum)
    {
        x=x+v[i+1];
        sum=tsum-x;
        i++;
    }
   cout<<i+1<<nl;
    }

    return 0;

}
