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
        string str;
        cin>>str;
        ll l=str.size();
        set<char>s1,s2;
        for(ll i=0; i<l/2; i++)
        {
           s1.insert(str[i]);
        }
        if(l%2!=0){
        for(ll i=(l/2)+1; i<l; i++)
        {
           s2.insert(str[i]);
        }
        }
        else
        {
        for(ll i=(l/2); i<l; i++)
        {
           s2.insert(str[i]);
        }
        }
        if(s1.size()>=2 && s2.size()>=2)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
}
