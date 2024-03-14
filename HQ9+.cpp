#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
   string str;
   cin>>str;
   ll l=str.size(),cnt=0,c=0;
   for(ll i=0; i<l; ++i)
   {
       if(str[i]>=33 && str[i]<= 126) ++cnt;
   }
   ll flg=0;
   for(ll i=0; i<l; ++i)
   {
       if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        ++flg;
   }
   if(flg>=1 && cnt==l)
        cout<<"YES"<<nl;
   else
    cout<<"NO"<<nl;
   return 0;
}
