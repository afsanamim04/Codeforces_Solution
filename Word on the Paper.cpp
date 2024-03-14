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
      string str,str1,str2;;
      for(ll i=0; i<8; i++)
      {
          cin>>str;
          str1+=str;

      }
      for(ll i=0; i<str1.size(); ++i)
      {
          if(str1[i]!='.')
            str2.push_back(str1[i]);
      }
      cout<<str2<<nl;
  }
}
