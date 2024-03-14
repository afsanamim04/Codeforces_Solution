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
        string str1,str2;
        cin>>str1>>str2;
        vector<ll>v;
        for(ll i=0; i<str2.size(); i++)
        {
            for(ll j=0; j<str1.size(); j++)
            {
                if(str2[i]==str1[j])
                {
                    v.push_back(j+1);
                }
            }
        }
        //for(auto it: v) cout<<it<<' ';
        ll cnt=0;
        for(ll i=0; i<v.size()-1; i++)
        {
          cnt=cnt+abs(v[i+1]-v[i]);
        }
        cout<<cnt<<nl;
    }
}
