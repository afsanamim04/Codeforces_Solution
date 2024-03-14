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
    getline(cin, str);
    vector<ll>v;
    ll cnt=0;
    for(ll i=0; i<str.size(); i++)
    {
       if(str[i]>='a' && str[i]<='z')
            v.push_back(str[i]);
    }
    sort(v.begin(),v.end());
    for(ll i=0; i<v.size(); ++i)
    {
       if(v[i]!=v[i+1])
        cnt++;
    }
    cout<<cnt<<nl;
    return 0;
}
