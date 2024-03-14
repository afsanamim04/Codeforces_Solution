#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    string str,str1;
    cin>>str;
    ll l=str.size();
    ll cnt=0;
    for(ll i=0; i<l; i++)
    {
        if(str[i]>='A' && str[i]<='Z') cnt++;
    }
    if(cnt==l)
    {
        //str1.push_back(toupper(str[0]));
        for(ll i=0; i<l; ++i)
        {
            str1.push_back(tolower(str[i]));
        }
        for(auto it:str1) cout<<it;
        cout<<nl;

    }

    else if(str[0]>='a' && str[0]<='z')
    {
        ll flg=1;
      for(ll i=1; i<l; i++)
    {
        if(str[i]>='A' && str[i]<='Z') flg++;
    }
    if(flg==l)
      {
          str1.push_back(toupper(str[0]));
        for(ll i=1; i<l; ++i)
        {
            str1.push_back(tolower(str[i]));
        }
        for(auto it:str1) cout<<it;
        cout<<nl;
      }
      else
        cout<<str;
    }
      else
        cout<<str;
return 0;
}
