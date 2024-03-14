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
        set<char>s;
        ll i=0;
        while(i<str.size())
        {
            if(str[i]!=str[i+1])
            {
                s.insert(str[i]);
                 i++;
            }
            else
            {
                i+=2;
            }
        }
        /*sort(v.begin(),v.end());
        v2.push_back(v[0]);
        for(ll i=0; i<v.size()-1; i++)
        {
            if(v[i]!=v[i+1])
            {
                v2.push_back(v[i+1]);
            }
        }*/
        for(auto it:s) cout<<it;
        cout<<nl;
    }
}
