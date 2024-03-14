#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll a,b;
    cin>>a>>b;
    ll p=(min(a,b));
    ll q =(max(a,b));
    ll ans=0;
    ll n=q;
  if(a+b<4) {cout<<0<<nl; return;}
       q/=3;
       if(q>p)
       {
           cout<<p<<nl;
       }
       else
       {
         ll x =p*3;
         ll y = min(x,n);
         cout<<(p+y)/4<<nl;
       }

}
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        sol();
    }
}
