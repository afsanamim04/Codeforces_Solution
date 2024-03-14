#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
   ll t; cin>>t;
   while(t--)
   {
       ll x,y,z,a,b,c;
       cin>>a>>b>>c;
       x=a+b+c;
       y=b+c;
       z=c;
       cout<<x<<' '<<y<<' '<<z<<nl;
   }
}
