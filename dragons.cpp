#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
   ll s,n; cin>>s>>n;
   ll cnt=0;
   vector<pair<ll,ll>>v;
   for(ll i=0; i<n; i++)
   {
       ll x,y; cin>>x>>y;
       v.push_back(make_pair(x,y));
   }
   sort(v.begin(),v.end());
   for(ll i=0; i<n; i++)
   {
       if(s>v[i].first)
       {
           s+=v[i].second;
       }
       else
       {
           cnt++;
           break;
       }
   }
   if(cnt==0) cout<<"YES"<<nl;
   else  cout<<"NO"<<nl;
}
