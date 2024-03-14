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
        vector<ll>v;
        char c=str[0]; int cnt=0;
        for(ll i=0; i<str.size(); i++)
        {
           if(c==str[i]) cnt++;
           else
           {
               v.push_back(cnt);
               cnt=0;
               c=str[i];
               cnt++;
           }
        }
        v.push_back(cnt);
         ll flg=0;
        for(ll i=0; i<v.size(); i++)
        {
            if(v[i]==1){
             flg++;
            }
        }
        if(flg==0) cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
}
