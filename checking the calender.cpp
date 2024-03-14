#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1=="saturday")
    {
        if(s2=="saturday" || s2=="monday" || s2=="tuesday")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
  if(s1=="sunday")
    {
        if(s2=="sunday" || s2=="wednesday" || s2=="tuesday")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    if(s1=="monday")
    {
        if(s2=="thursday" || s2=="monday" || s2=="wednesday")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    if(s1=="tuesday")
    {
        if(s2=="friday" || s2=="thursday" || s2=="tuesday")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    if(s1=="wednesday")
    {
        if(s2=="wednesday" || s2=="saturday" || s2=="friday")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    if(s1=="thursday")
    {
        if(s2=="thursday" || s2=="saturday" || s2=="sunday")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    if(s1=="friday")
    {
        if(s2=="monday" || s2=="sunday" || s2=="friday")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    return 0;
}
