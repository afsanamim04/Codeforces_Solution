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
   ll t; cin>>t;
   while(t--)
   {
       ll a,b,c; cin>>a>>b>>c;
       if(a==b && a==c) cout<<"YES"<<nl;
       else
       {
           vector<ll>v; v.pb(a); v.pb(b); v.pb(c);
           sort(v.begin(),v.end());
           if(v[1]%v[0]!=0 || v[2]%v[0]!=0) cout<<"NO"<<nl;
           else
           {
               ll p=(v[1]/v[0])-1; ll q=(v[2]/v[0])-1;
               if(p+q>3) cout<<"NO"<<nl;
               else cout<<"YES"<<nl;
           }

       }
   }
}

int main()
{
    sol();
}
