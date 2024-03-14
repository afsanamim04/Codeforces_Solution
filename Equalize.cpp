#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
   int n; cin>>n;
   vector<ll>v;
   for(int i=0; i<n; ++i)
   {
       ll j; cin>>j;
       v.push_back(j);
   }
   sort(v.begin(),v.end());
   v.resize(unique(v.begin(), v.end()) - v.begin());
   ll ans=0,cnt=0,p;
   for(int i=0; i<v.size(); ++i)
   {
       while(v[i]-v[cnt]>=n)
       {
           cnt++;
       }
       ans=max(ans,i-cnt+1);
   }
   cout<<ans<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
