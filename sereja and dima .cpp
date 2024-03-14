#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n; cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
       ll j; cin>>j;
       v.push_back(j);
    }
   // sort(v.begin(),v.end());
    ll sum1=0,sum2=0;
    ll i=n-1,j=n-2;
    while(i>=0 || j>=0)
    {
        sum1+=v[i];
        sum2+=v[j];
         i-=2;
         j-=2;
         if(i==0)
         {
             sum1+=v[i];
        break;
         }
    }
    cout<<sum1<<" "<<sum2<<nl;
    return 0;
}

