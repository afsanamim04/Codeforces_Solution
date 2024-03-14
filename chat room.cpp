#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    string str,str2="hello";
    cin>>str;
    ll x=0,y=0;
    for(ll i=0; i<str.size(); ++i)
    {
        if(str[i]==str2[x])
        {
            ++x;
            ++y;
        }
    }
    if(y==5)
        cout<<"YES"<<nl;
    else
        cout<<"NO"<<nl;
    return 0;
}
   /* string s,s1,s2;
    cin>>s;
    for(ll i=0; i<s.size(); ++i)
    {
        if(s[i]=='h' || s[i]=='e' || s[i]=='l' || s[i]=='o')
        {
        s1.push_back(s[i]);
        }
    }
    for(auto it: s1) cout<<it;
    cout<<nl;
    ll l=s1.size();
    for(ll i=0; i<l; ++i)
    {
        if(s1[i]!=s1[i+1])
        {
           s2.push_back(s1[i]);
        }
    }
    s2.push_back(s1[l]);
    for(auto it: s2) cout<<it;
    cout<<nl;
   string s3="helo";
    ll flg=0;
    if(s2==s3)
    {
       for(ll i=0; i<l; ++i)
       {
           if(s1[i]=='l')
            ++flg;
       }
    if(flg>=2)
        cout<<"YES"<<nl;
    else
        cout<<"NO"<<nl;
    }
    else
        cout<<"NO"<<nl;
    return 0;
}*/
