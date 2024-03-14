#include<bits/stdc++.h>
#define PI        acos(-1.0)
#define all(x)    x.begin(),x.end()
#define nl        '\n'
#define s         string
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    s ss[n+5];
    ll cnt=1;
    string sss[1];
    for(ll i=0; i<n; ++i)
    {
        cin>>ss[i];
    }
    ll flg=0;
    for(ll i=0; i<n-1; ++i)
    {
      if(ss[0]==ss[i+1])
        ++cnt;
      else{
        ++flg;
         sss[0]=ss[i+1];
      }
    }

   if(cnt>flg)
    cout<<ss[0]<<nl;
   else
    cout<<sss[0]<<nl;
   return 0;
}
