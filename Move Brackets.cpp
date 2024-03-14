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
      ll n; cin>>n;
      string str;
      cin>>str;
      ll i=0;ll j=0;
      while(str[j]!='\0')
      {

          if(str[j]=='(' && str[j+1]==')')
          {
              str.erase(str.begin()+j);
              str.erase(str.begin()+j);
              j=0;
          }
          else j++;
         // cout<<str<<nl;

      }
      cout<<(str.size())/2<<nl;
    }
}
